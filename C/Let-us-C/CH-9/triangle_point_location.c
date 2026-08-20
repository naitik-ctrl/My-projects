#include <stdio.h>
#include <math.h>
void distance(float,float,float,float, float *);
void area(float,float,float, float *);
int main()
{
    float x1,y1,x2,y2,x3,y3,x,y,p1,p2,p3;
    float d1,d2,d3,area_of_triangle,p_triangle1,p_triangle2,p_triangle3;
    printf("Enter the coordinates 1st point(x1,y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates 2nd point(x2,y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the coordinates 2nd point(x3,y3): ");
    scanf("%f %f", &x3, &y3);
    distance(x1,y1,x2,y2,&d1);
    distance(x2,y2,x3,y3, &d2);
    distance(x3,y3,x1,y1, &d3);
    printf("---------------------------------------------------------------\n");
    printf("The distance between points (x1,y1) and (x2,y2) is : %f units\n", d1);
    printf("The distance between points (x2,y2) and (x3,y3) is : %f units\n", d2);
    printf("The distance between points (x1,y1) and (x3,y3) is : %f units\n", d3);
    printf("---------------------------------------------------------------\n");
    area(d1,d2,d3, &area_of_triangle);
    printf("The area of resulting triangle is: %f\n", area_of_triangle);
    printf("Enter the coordinates of point to be checked(x,y): \n");
    scanf("%f %f",&x, &y);
    distance(x,y,x1,y1,&p1);
    distance(x,y,x2,y2,&p2);
    distance(x,y,x3,y3,&p3);
    area(p1,p2,d1,&p_triangle1);
    area(p2,p3,d2,&p_triangle2);
    area(p1,p3,d3,&p_triangle3);
    float sum=0;
    sum = p_triangle1 + p_triangle2 + p_triangle3;
    if (fabs(sum - area_of_triangle) < 0.0001)
    {
        printf("The point lies inside the triangle\n");
    }
    else{
        printf("The point does not lie inside the triangle\n");
    }

}
void distance(float a, float b, float p, float q, float *d)
{
    *d = sqrt(pow((p-a), 2) + pow((q-b), 2)); 
}
void area(float p, float q, float r, float *a)
{
    float sp;
    sp = (p+q+r)/2.0;
    *a = sqrt(sp*(sp-p)*(sp-q)*(sp-r));

}
