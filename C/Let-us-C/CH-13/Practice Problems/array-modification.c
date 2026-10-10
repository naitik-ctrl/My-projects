#include <stdio.h>
int* modify(int *);
int main()
{
    int n[10];
    int *ptr=n;
    int *new_arr;
    for (int i = 0; i<10 ; i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d", ptr+i);
    }
    new_arr=modify(ptr);
    for (int i = 0 ; i<10 ; i++)
    {
        printf("%d\t", new_arr[i]);
    }
}
int* modify(int *ptr1)
{
    for (int i = 0; i<10 ; i++)
    {
        *(ptr1 + i) = *(ptr1 + i) * 3;
    }
    return ptr1;
}
