/*Menu Driven Program*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, num, i, fact;
    while (1)
    {
        printf("\n1.Factorial\n");
        printf("2.Prime\n");
        printf("3.Odd/Even\n");
        printf("4.Exit\n");
        printf("Select the program you want to perform: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                fact = 1;
                for (int i = 1; i<=num ; i++)
                {
                    fact = fact * i;
                }
                printf("The Factorial value of the number %d is : %d\n", num, fact);
                break;
            case 2:
                printf("Enter a number:");
                scanf("%d", &num);
                int count=0;
                for (int i = 2; i<num;i++)
                {
                    if (num%i==0)
                    {
                        count++;
                        break;
                    }
                }
                if (count == 1)
                {
                    printf("Not a prime number!");
                }
                else {
                    printf("%d is a prime number!",num);
                }
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num%2==0)
                {
                    printf("%d is an even number!", num);
                }
                else 
                {
                    printf("%d is an odd number", num);
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice, Try Again!\a\n");
        }
    }
    return 0;

}
