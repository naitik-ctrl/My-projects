#include <stdio.h>
int main()
{
    int size1, size2;
    printf("Enter size of array-1: ");
    scanf("%d", &size1);
    printf("Enter size of array-2: ");
    scanf("%d", &size2);
    int arr1[size1], arr2[size2],arr[size1],elts=0;
    for (int i = 0; i < size1; i++)
    {
        printf("Enter %d element of array-1: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        printf("Enter %d element of array-2: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < size1; i++)
    {
        int count = 0;
        for (int k = 0; k < i; k++)
        {
            if (arr1[k] == arr1[i])
            {
                count = 1;
                break;
            }
        }
        if (count)
        {
            continue;
        }

        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr[elts]=arr1[i];
                elts++;
                break;
            }
        }
    }
    printf("The set of repeated elements in the arrays are : ");
    printf("{\t");
    for (int i = 0; i<elts ; i++)
    {
        printf("%d\t", arr[i]);
        
    }
    printf("}");
}
