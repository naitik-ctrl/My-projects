#include <stdio.h>
#include <math.h>
#define PI 3.1415926535

int main()
{
    double degree, radians;
    printf("Enter the angle in degrees: ");
    scanf("%lf", &degree);
    /* Convert degree to radians*/
    radians = degree * (PI/180.00);
    /*Print the T-Ratios*/
    printf("\nsin(%.2lf) = %.4lf", degree, sin(radians));
    printf("\ncos(%.2lf) = %.4lf" ,degree, cos(radians));
    printf("\ntan(%.2lf) = %.4lf", degree, tan(radians));
    /* Handling potential division error*/
    if (sin(radians) != 0 )
    {
        printf("\ncosec(%.2lf) = %.4lf", degree , 1.0 / sin(radians));
    }
    else
    {
        printf("\nUndefined");
    }
    if (cos(radians)!=0)
    {
        printf("\nsec(%.2lf) = %.4lf ", degree, 1.0 / cos(radians));
    }
    if (tan(radians!=0))
    {
        printf("\ncot(%.2lf) = %.4lf", degree,  1.0 / tan(radians));
    }
    else
    {
        printf("\nUndefined");
    }

}
