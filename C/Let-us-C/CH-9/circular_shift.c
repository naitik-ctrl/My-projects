/*Circulary shift values to right*/
#include <stdio.h>
void cshift(int *, int *, int *);
int main()
{
    int x, y ,z;
    printf("Enter three numbers to perform circular shift: ");
    scanf("%d %d %d", &x, &y, &z);
    cshift(&x, &y, &z);
    printf("Result: %d %d %d", x, y, z);
    return 0;
}
void cshift(int * a, int *b, int *c)
{
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}
