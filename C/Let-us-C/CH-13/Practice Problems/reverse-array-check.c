#include <stdio.h>
int main()
{
    int n[10];
    for (int i = 0; i<10 ; i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d", &n[i]);
    }
    for (int i = 0 ; i<5 ; i++)
    {
        if (n[i]==n[9-i])
        {
            printf("Value at index %d and %d are equal!\n", i,9-i);
        }
    }
}
