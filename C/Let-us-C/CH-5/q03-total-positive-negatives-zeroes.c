/* Enter the number of values the user wants*/
#include <stdio.h>

int main()
{
    int number;
    int positive_count = 0, negative_count = 0, zero_count=0;
    char choice;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number > 0)
        {
            positive_count = positive_count + 1;
        }
        else if (number < 0)
        {
            negative_count = negative_count + 1;
        }
        else 
        {
            zero_count = zero_count + 1;
        }
        printf("\nDo you want to enter a number (y/n):");
        scanf("%s", &choice);
    } 
    while (choice == 'Y'  || choice == 'y');
    printf("\nThe total number of positives you entered are : %d", positive_count);
    printf("\nThe total number of negatives you entered are: %d", negative_count);
    printf("\nZEROES : %d", zero_count);

}
