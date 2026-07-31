#include <stdio.h>

int main()
{
    float s1, s2 ,s3;
    printf("Enter the lengths of side 1, side 2 and side 3 of a triangle: ");
    scanf("%d%d%d", &s1,&s2,&s3);
    /* Check if it is a Equilateral Triangle*/
    if (s1==s2 && s2 == s3)
    {
        printf("According ot the given sides,the triangle is Equilateral Triangle.");
    }
    /* Check if it is a isosceles */
    else if(s1==s2 || s2==s3 || s1==s3)
    {
        printf("According to the given data,  the traingle is Isosceles triangle");
    }
    else{
        printf("According to the given data, the triangle is Scalene Triangle");
    }
}
