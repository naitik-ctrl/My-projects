#include <stdio.h>
void power_fact(float, int, int, float*, int*);
int main()
{
    float a;
    int b, c, d;
    float pow;
    printf("Enter the base number and raised to number: ");
    scanf("%f %d", &a, &b);
    printf("Enter a number whose factorial is to be calculated: ");
    scanf("%d", &c);
    power_fact(a, b, c, &pow, &d);
    printf("Power : %f, Facorial : %d", pow, d);
    return 0;
}
void power_fact(float x, int y, int number, float *p, int *f)
{
    float res =1;
    for (int i =1; i<=y;i++)
    {
        res *= x;
    }
    *p =  res;
    int result = 1;
    for (int i = number; i>0;i--)
    {
        result = result * i;
    }
    *f = result;

}
