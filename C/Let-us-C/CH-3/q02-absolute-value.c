#include <stdio.h>

int main()
{
    int n;
    int temp = 0;
    /* Read the number whose absolute value is to be determined */
    printf("Enter the number : ");
    scanf("%d", &n);
    /* Check whether the number is positive, negative, or zero */
    if (n > 0)
    {
        printf("Absolute value of n is : %d", n);
    }
    else if ( n < 0)
    {
        n = temp - n;
        printf("Absolute value of n is : %d", n);
    }
    /* Handle the special case when the entered number is zero */
    else 
    {
        printf("The number has no absolute value");
    }
}
