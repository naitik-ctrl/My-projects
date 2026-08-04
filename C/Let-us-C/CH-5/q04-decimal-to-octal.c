#include <stdio.h>

int main()
{
    int n;
    int rem = 0;
    int multiplier = 1;
    int octal_number = 0;
    printf("Enter the number to be converted into octal equivalent:\n");
    scanf("%d", &n);
    while (n!=0)
    {
        rem = n % 8;
        n = n/8;
        octal_number = octal_number + (rem * multiplier);
        multiplier = multiplier * 10;
    }
    printf("The Resultant octal number of decimal number is: %d", octal_number);
}
