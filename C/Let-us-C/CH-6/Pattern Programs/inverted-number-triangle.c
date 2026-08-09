#include <stdio.h>

int main()
{
    int n = 5;
    for (int i =1; i<=n; i++)
    {
        for (int j = 5;j>=i;j--)
        {
            printf("%d", n-j+1);
        }
        printf("\n");
    }
}
/*OUTPUT:
12345
1234
123
12
1
*/
