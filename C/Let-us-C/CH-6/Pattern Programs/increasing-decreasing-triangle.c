#include <stdio.h>

int main()
{
    int n =5;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n-1; i>0; i--)
    {
        for (int j = i-1; j>-1; j--)
        {
            printf("*");
        }
        printf("\n");
    }


}

/*OUTPUT:
*
**
***
****
*****
****
***
**
*

*/
