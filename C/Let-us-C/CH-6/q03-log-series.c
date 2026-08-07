#include <stdio.h>
#include <math.h>

int main()
{
    float x,logarithm;
    int i;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    /* Check if the entered value of x is greater than 0.5 */
    if (x >= 0.5)
    {
        /*NOTE: The series summation is upto 7 terms which can result in variation with original value!*/
        for (i = 1; i<=7; i++)
        {
            logarithm += (1.0/i) * pow(((x-1)/ x), i);
        }
    /*Display the value*/
    printf("The logarithm value of %f upto 7 terms is: %.4f", x, logarithm);
    }
    else
    {
        printf("Invalid value of x! Try Another value.");
    }
    
}
