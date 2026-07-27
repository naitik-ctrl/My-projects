#include <stdio.h>

int main()
{
    /* Declare variables for the input number, its digits, and the final sum */
    int n; 
    int sum = 0;
    int rem;
    /* Read the five-digit number from the user */
    printf("\nEnter the number: \n");
    scanf("%d", &n);
    /* Extract each digit using modulus, add it to the sum, and remove the last digit */
    while (n!=0)
    {
        rem = n%10;
        n = n/10;
        sum = sum + rem;
    }
    /* Display the calculated sum of all digits */
    printf("The sum of digits of the entered digits is: %d", sum);
}
