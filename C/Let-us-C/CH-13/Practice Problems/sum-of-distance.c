#include <stdio.h>
#include <math.h>
int main()
{
    float coordinates[10][2];
    float result=0.0;
    for (int i = 0; i < 10; i++)
    {
        float *ptrx = &coordinates[i][0];
        float *ptry = &coordinates[i][1];
        printf("Enter the co-ordinate for %d point: ", i + 1);
        scanf("%f %f", ptrx, ptry);
    }
    for (int i = 0; i < 9; i++)
    {
        float *ptrx1 = &coordinates[i][0];
        float *ptry1= &coordinates[i][1];
        float *ptrx2 = &coordinates[i+1][0];
        float *ptry2 = &coordinates[i+1][1];
        float dist=0;
        dist = sqrt(pow(*ptrx2-*ptrx1,2) + pow(*ptry2-*ptry1,2));
        result+=dist;
    }
    printf("Result : %f",result);
}
