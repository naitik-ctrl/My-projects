#include <stdio.h>
#include <math.h>
#define PI 3.14159265
float area(float *, float *, float *);
int main()
{
    float a[6], b[6];
    float angle[6];
    float *ptr = a, *ptr1 = b, *ptr2 = angle;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the 1st side of the triangle: ");
        scanf("%f", ptr + i);
        printf("Enter the 2nd side of the triangle: ");
        scanf("%f", ptr1 + i);
        printf("Enter the angle between the two sides(in degrees): ");
        scanf("%f", ptr2 + i);
        printf("-----------------\n");
    }
    float max;
    max = area(ptr, ptr1, ptr2);
    printf("The maximum area is : %f\n", max);
}
float area(float *side1, float *side2, float *theta)
{
    float rad = *theta;
    float max_area = ((*side1 * (*side2)) * sin(rad)) / 2.0;
    for (int i = 1; i < 6; i++)
    {
        float current_rad = *(theta + i);
        float area = ((*(side1 + i)) * (*(side2 + i)) * sin(current_rad)) / 2.0;
        if (area > max_area)
        {
            max_area = area;
        }
    }

    return max_area;
}
