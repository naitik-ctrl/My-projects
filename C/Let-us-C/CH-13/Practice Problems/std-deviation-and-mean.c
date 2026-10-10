#include <stdio.h>
#include <math.h>
float mean(int *);
float std_dev(int numbers[]);
int main()
{
    int data[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    float m,sd;
    m = mean(data);
    sd = std_dev(data);
    printf("The mean of the given data is : %f\n", m);
    printf("The std. deviation of the given data is : %f", sd);
}
float mean(int *ptr)
{
    int sum=0;
    int size = 15;
    for (int i = 0; i< size ; i++)
    {
        sum+=*(ptr+i);
    }
    float mean;
    mean = sum / 15.0;
    return mean;
}
float std_dev(int *ptr)
{
    float nr=0,dr,result;
    int size = 15;
    float m;
    m = mean(ptr);
    for (int i = 0 ; i<size ; i++)
    {
        nr+=pow((*(ptr+i) - m),2);
    }
    dr = 15.0;
    result = pow(nr/(float)dr,1/2.0);
    return result;
}
