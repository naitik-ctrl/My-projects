#include <stdio.h>
int rec(int);
int main()
{
    int n,sum;
    printf("Enter n to get sum of first 'n' natural numbers: ");
    scanf("%d", &n);
    sum = rec(n);
    printf("The sum of first %d natural numbers is: %d", n, sum);
}
int rec(int n)
{
    int sum=0;
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n + rec(n-1);
    }
}
