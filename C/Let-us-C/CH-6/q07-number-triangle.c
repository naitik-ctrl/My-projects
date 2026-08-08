#include <stdio.h>

int main()
{
    int k=1, n=4;
    float l = -14;
    for (int i = 1; i<=n; i++)
    {
        for (int j = l; j<= (n-i) ; j++)
        {
            printf(" ");
        }
        l+=0.8;
        for (int j = 1; j<=i; j++)
        {
            printf(" %d ", k);
            k++; 
        }
    printf("\n");
    }
}
/*OUTPUT:

                   1 
                 2  3 
               4  5  6 
             7  8  9  10

*/
