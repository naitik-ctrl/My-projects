#include <stdio.h>
void insert(int []);
int main()
{
    int n[5];
    int *ptr=n;
    for (int i = 0; i<5 ; i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d", ptr+i);
    }
    insert(n);
}
void insert(int numbers[5])
{
    for (int i = 1; i<5 ; i++)
    {
        int p = numbers[i];
        int j = i-1;
        while (j>=0 && numbers[j]>p)
        {
            numbers[j+1] = numbers[j];
            j--;
        }
        numbers[j+1]=p;
    }
    for (int i =0 ; i<5 ; i++)
    {
        printf("%d\t", numbers[i]);
    }
}
