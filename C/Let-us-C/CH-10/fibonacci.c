#include <stdio.h>
int fibonacci(int);
int main()
{
    int terms = 25, i , n=0;
    for (int i =1; i<=terms; i++)
    {
        printf("%d ", fibonacci(n));
        n++;
    }
    return 0;
    
}
int fibonacci(int n)
{
    if (n==1 || n==0)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
