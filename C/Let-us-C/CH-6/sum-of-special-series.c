#include <stdio.h>

int main()
{
    int i,j,n;
    float sum = 0.0 ,fact;
    printf("Enter a number to get sum of first number of the series: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        fact = 1.0;
        for (j = 1; j<=i;j++)
        {
            fact =fact * i;
        }
        sum = sum + (i/fact);
    }
    printf("Sum is: %f", sum);
}
