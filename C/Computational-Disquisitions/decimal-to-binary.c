#include <stdio.h>
/*Convert binary to decimal*/
int main()
{
    long int n;
    int base = 1;
    int sum = 0;
    printf("Enter a binary number to be converted to decimal:");
    scanf("%ld", &n);
    while (n)
    {
        int last_dig = n%10;
        n=n/10;
        if ((last_dig==0) || (last_dig==1))
        {
            if (last_dig==1)
            {
                sum += last_dig * base;
            }
        } 
        base = base * 2;
    }
    printf("The decimal number is : %d", sum);
}

/*Illustrative Execution
Enter a binary number to be converted to decimal: 1011
The decimal number is : 11
*/
