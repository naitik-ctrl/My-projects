#include <stdio.h>
int main()
{
    int n[25], e_count=0, o_count=0, p_count=0, n_count=0;
    for (int i = 0; i < 25; i++)
    {
        printf("Enter %d element :", i + 1);
        scanf("%d", &n[i]);
        if (n[i] > 0)
        {
            p_count++;
            if (n[i] % 2 == 0)
            {
                e_count++;
            }
            else
            {
                o_count++;
            }
        }
        else
        {
            n_count++;
            if (n[i] % 2 == 0)
            {
                e_count++;
            }
            else
            {
                o_count++;
            }
        }
    }
    printf("Total number of positive integers are: %d\n", p_count);
    printf("Total number of negative integers are: %d\n", n_count);
    printf("Total number of even integers are: %d\n", e_count);
    printf("Total number of odd integers are: %d\n", o_count);
}
