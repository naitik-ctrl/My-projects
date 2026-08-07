#include <stdio.h>

int main ()
{
    int a,b,c;
  /*Iterate through every possible value of c*/
    for (c = 1;c<=30;c++)
    {
        /*Any side is always less than hypotenuse*/
        for (a=1;a<c;a++)
        {
            /*Prevent duplicate pairs like(3,4,5) and (4,3,5)*/
            for ( b= a; b < c; b++)
            {
                /*APply the condition for Py-triplets*/
                if ((a*a)+ (b*b)==(c*c))
                {
                    printf("%d,%d,%d\n", a,b,c);
                }   
            }
        }
    }
    return 0;
}

