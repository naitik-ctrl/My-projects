#include <stdio.h>
/*Including the math header file*/
#include <math.h>

int main()
{
    float x1,y1,r,d,x,y;
    printf("\nEnter the coordinates of centre of the circle: ");
    scanf("%f%f", &x1, &y1);
    printf("\nGreat, Now enter the radius of the circle:");
    scanf("%f", &r);
    printf("Enter the point whose availability is to be checked: ");
    scanf("%f%f", &x, &y);
    /*Using distance formula*/
    d = sqrt(pow(x-x1, 2) + (y-y1, 2));
    if (d>r)
    {
        printf("The point lies outside the circle!");

    }
    else
    {
        printf("The point lies inside the circle!");
    }

}
