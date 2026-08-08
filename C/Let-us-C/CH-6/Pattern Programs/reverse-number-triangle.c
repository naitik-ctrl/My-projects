#include <stdio.h>

int main()
{
    int n = 5;
    for (int i =1; i<=n; i++)
    {
        for (int j = 1 ; j<=i ; j++)
        {
            printf("%d", i-j+1);
        }
    printf("\n");
    }
}
/*OUTPUT: 
1
21
321
4321
54321
*/
