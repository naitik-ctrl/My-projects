#include <stdio.h>

int main()
{
    int n[10] = {1, 2, 3, 2, 4, 1, 5, 3, 6, 9};
    int size = 10;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (n[i] == n[j])
            {
                for (int k = j; k < size - 1; k++)
                {
                    n[k] = n[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", n[i]);
    }
}
