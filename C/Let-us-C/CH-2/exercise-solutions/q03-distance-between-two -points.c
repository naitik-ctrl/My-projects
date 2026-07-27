#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main()
{
    /* Declare variables*/
    float l1, g1, l2, g2;
    float d;
    /* Read users inputs*/
    printf("\nEnter the co-ordinates of 1st place (L1,G1): \n");
    scanf("%f %f", &l1, &g1);
    printf("\nEnter the co-ordinates of 1st place (L2,G2): \n");
    scanf("%f %f", &l2, &g2);
    /* COnvert radians to degrees because C trigo. functions require radians*/
    l1 = l1 * (PI/180.0);
    l2 = l2 * (PI/180.0);
    g1 = g1 * (PI/180.0);
    g2 = g2 * (PI/180.0);
    /*By the provided formula to calculate the distance*/
    d = 3440*acos(sin(l1)*sin(l2) + cos(l1)*cos(l2)*cos(g2-g1));
    printf("The distance between given two poins is: %lf", d);
    return 0;
}
