#include <stdio.h>
void copy(int numbers[]);
int main()
{
    int n[5];
    for (int i = 0; i<5 ; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", &n[i]);
    }
    copy(n);
}
void copy(int numbers[])
{
    int arr[5];
    for (int i = 0; i<5 ;i++)
    {
        arr[i]=numbers[4-i];
    }
    for (int i = 0;i<5 ; i++)
    {
        printf("%d\t", arr[i]);
    }
}
