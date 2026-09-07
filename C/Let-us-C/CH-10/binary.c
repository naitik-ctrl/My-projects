#include <stdio.h>
void rec(int);
int main()
{
    int n,rev;
    printf("Enter a number to get it's binary equivalent: ");
    scanf("%d", &n);
    rec(n);

}
void rec(int number)
{
    if (number==0)
        return;
    rec(number/2);
    printf("%d", number%2);
}
