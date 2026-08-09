#include <stdio.h>

int main()
{
    int n = 5;
    for (int i =1; i<=n; i++)
    {
        for (int j = 5; j >i ;j--)
        {
            printf(" ");
        }
        for (int j = 1;j<=i;j++)
        {
            printf("%d", j);
        }
        for (int k = 1; k < i; k++)
        {
            printf("%d", i-k);
        }
        printf("\n");
    }
}
/*OUTPUT:

    1
   121
  12321
 1234321
123454321

*/
