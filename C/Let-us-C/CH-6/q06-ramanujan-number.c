#include <stdio.h>
#include <math.h>

int main()
{
    /*Initialize variables*/
    int count;
    int x,y;
    /* Set a limit, say 10000*/
    for (int i = 1; i<=10000; i++)
    {
        count = 0;
        /*Obviously, x^3 and y^3 are always less than the Ramanujan number*/
        for (x=1; x*x*x< i; x++)
        {
            for (y=x; y*y*y< i; y++)
            {
                /*Check if there exists value of x and y such that x^3 + y^3 = i*/
                if ((x*x*x) + (y*y*y) == i)
                {
                    /*Increase the count value by 1 */
                    count++;
                }
            }
        }
    /*If there exists two pairs whose cube is equal to i, then it is a Ramanujan number.*/  
    if (count == 2)
    {
        printf("%d is a Ramanujan Number!\n", i);
    }
    }
}
