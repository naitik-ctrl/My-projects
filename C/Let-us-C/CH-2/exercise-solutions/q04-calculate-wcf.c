#include <stdio.h>
#include <math.h>

int main()
{
    /* Read data from the user*/
    float t, v, wcf;
    printf("\nEnter the temperature of air in your area: \n");
    scanf("%f", &t);
    printf("\nEnter the wind velocity in your area: \n");
    scanf("%f", &v);
    /* Apply the provided formula*/
    wcf = 35.74 + (0.6215*t) + ((0.4275*t) - 35.75) * pow(v, 0.16);
    /* Display the result*/
    printf("The Wind-chill factor in your area is: %f", wcf);
    return 0;
}
