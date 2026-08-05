#include <stdio.h>

int main()
{
    /*Declaration of variables*/
    int n;
    int smallest;
    int greatest;
    char choice;
    printf("Enter a number: ");
    scanf("%d", &n);
    /* Initialising the greatest and smallest values.*/
    greatest = n;
    smallest = n;
    do
    {
        /* Ask user whether they want to contiue entering numbers*/
        printf("Do you want to enter a number again[y/n]?: \n");
        scanf("%s", &choice);
        if (choice == 'Y' || choice == 'y')
        {
            printf("Enter a number: ");
            scanf("%d" ,&n);
            /*Finding the greates and smallest number*/
            if (n > greatest)
            {
                greatest = n;
            }
            else if (n < smallest)
            {
                smallest = n;
            }
        }

    } 
    while (choice == 'Y' || choice == 'y');
  /* Range is difference of the highest value and the lowest value.*/
    printf("The range of the given numbers is: %d", (greatest - smallest ));
    
}
