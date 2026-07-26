/*Including the header-files*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,sp,area; /*sp stands for semi-perimeter*/
    printf("\nEnter the sides of traingle: ");
    scanf("%f %f %f", &a, &b, &c);
    sp = (a+b+c)/2;
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("The area of the triangle given is: %f\n", area);
    return 0;
}
