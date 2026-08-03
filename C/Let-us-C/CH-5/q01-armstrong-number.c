#include <stdio.h>

int main()
{
    int i = 1;
    int rem;
    
    while (i <= 500)
    {
        int temp = i;
        int sum = 0;
        
        while (temp > 0)
        {
            rem = temp % 10;
            // For numbers 1 to 9, power is 1. For 100 to 500, power is 3.
            if (i < 10) {
                sum = sum + rem; 
            } else {
                sum = sum + (rem * rem * rem);
            }
            temp = temp / 10;
        }
        
        if (sum == i)
        {
            printf("%d is an armstrong number\n", i);
        }
        i = i + 1;
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int i = 1;
    int rem;
    
    while (i <= 500)
    {
        int temp = i;
        int sum = 0;
        
        while (temp > 0)
        {
            rem = temp % 10;
            // For numbers 1 to 9, power is 1. For 100 to 500, power is 3.
            if (i < 10) {
                sum = sum + rem; 
            } else {
                sum = sum + (rem * rem * rem);
            }
            temp = temp / 10;
        }
        
        if (sum == i)
        {
            printf("%d is an armstrong number\n", i);
        }
        i = i + 1;
    }
    return 0;
}
