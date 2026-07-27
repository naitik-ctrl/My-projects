#include <stdio.h>
#include <math.h>

int main()
{
    /*Declare the variables*/
    float x, y, r, phi;
    /*Input x, y from the user*/
    /* Note: only 1st quadrant co-rdinates are accepted*/
    printf("\nEnter the cartesian co-ordinates (x,y): \n");
    scanf("%f %f", &x, &y);
    /* Using the formula for finding polar co-ordinates*/
    r = sqrt((x*x) + (y*y));
    phi= atan2(y, x);
    /* Display the results*/
    printf("The polar co-ordinates are: %f, %f", r, phi);
    return 0;
}
