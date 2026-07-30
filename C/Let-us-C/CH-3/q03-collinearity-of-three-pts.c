#include <stdio.h>

int main()
{
    float x1,y1,x2,y2,x3,y3,m1,m2;
    printf("Enter the values of (x1,y1), (x2,y2), (x3,y3): ");
    scanf("%f%f%f%f%f%f", &x1,&y1,&x2,&y2,&x3,&y3);
    /*Method-1: Using slope*/
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if ( m1==m2 )
    {
        printf("All the given points are collinear!");
    }
    else{
        printf("They are not collinear");
    }
    /*Method-2: Using Area of triangle*/
    // int area;
    // area = 0.5*(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    // if (area == 0)
    // {
    //     printf("All the given points are collinear!");
    // }
    // else
    // {
    //     printf("The given points are not collinear!");
    // }
}
