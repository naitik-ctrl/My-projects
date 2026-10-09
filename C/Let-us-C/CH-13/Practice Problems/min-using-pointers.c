#include <stdio.h>
int main()
{
    int n[25];
    int *ptr=n;
    for (int i = 0; i<25 ; i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d", ptr+i);
    }
    int min = *ptr;
    for (int i = 0; i<25 ; i++)
    {
        if (min > *(ptr+i))
        {
            min = *(ptr + i);
        } 
    }
    printf("The minimium-element in the array is : %d", min);
}
