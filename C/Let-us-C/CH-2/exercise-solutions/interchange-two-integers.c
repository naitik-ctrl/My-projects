#include <stdio.h>

int main()
{
    int a, b, t ;

    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);
    t=a;
    a=b;
    b=t;
    printf("%d %d", a,b);
}
