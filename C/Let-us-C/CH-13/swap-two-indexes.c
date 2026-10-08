#include <stdio.h>
int main()
{
    int n[]={12,4,3,2,1,89,32,21,443,13};
    int temp;
    for (int i=0;i<=9;i=i+2)
    {
        temp=n[i];
        n[i]=n[i+1];
        n[i+1]=temp;
    }
    for (int j =0;j<10;j++)
    {
        printf("%d ", n[j]);
    }
}
