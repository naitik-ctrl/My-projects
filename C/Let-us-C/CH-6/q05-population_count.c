#include <stdio.h>
#include <math.h>

int main()
{
    /*Initialize the required variables*/
    float r = 1.1, fp =100000, ip;
    /*To print data of last 10 years, we use for loop*/
    for (int i =1; i<=10; i++)
    {
        /*Final population = Initial Population * rate*/
        ip = fp / r;
        /*Assign the new value of ip to fp.*/
        fp = ip;
        printf("The population in the year %d is %.0f\n", i , fp);
    }
    return 0;
}
