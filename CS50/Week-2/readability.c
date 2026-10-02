// #include <stdio.h>
// /*Print Value and address of a variable*/
// int main()
// {
//     int n;
//     printf("Enter n:");
//     scanf("%d", &n);
//     printf("The value of n is: %d");
//     printf("The address of n is : %p", *(&n));
// }
// /*Print sum using pointers*/
// int sum(int *, int *);
// int main()
// {
//     int a,b,s;
//     printf("Enter values of a & b:");
//     scanf("%d %d", &a, &b);
//     s = sum(&a, &b);
//     printf("The sum of two numbers is : %d",s);
// }
// int sum(int *x, int *y)
// {
//     int s;
//     s = *x + *y;
//     return s;
// }
// /*Swap two numbers*/
// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y=temp;
// }
// int main()
// {
//     int a,b,p;
//     printf("Enter a & b:");
//     scanf("%d %d", &a, &b);
//     swap(&a, &b);
//     printf("The value of a is : %d and value of b is: %d", a,b);
// }
// /*Store n elements in an array and print using pointer*/
// void pr(int *, int*);
// int main()
// {
//     int n;
//     printf("Enter number of elements to be stored in the array: ");
//     scanf("%d",&n);
//     int arr[n];
//     for (int i =0 ; i<n ; i++)
//     {
//         printf("Enter %d element :", i+1);
//         scanf("%d", &arr[i]);
//     }
//     pr(&n,arr);
// }
// void pr(int *p, int *array)
// {
//     int rep = *p;
//     for (int i = 0; i < rep ; i++)
//     {
//         printf("%d", array[i]);
//     }
//     printf("\n");
// }
// /*Copy one array to another using pointers.*/
// int c_array(int *array, int *copy)
// {
//     for (int i =0; i < 5; i++)
//     {
//         copy[i] = array[i];
//     }
// }
// int main()
// {
//     int n[]= {10,20,30,40,50};
//     int copy[5];
//     c_array(n,copy);
//     for (int i = 0 ; i<5 ; i++)
//     {
//         printf("%d ", copy[i]);

//     }

// }
// /*Swap two arrays using Pointers*/
// void swap(int *arr1, int *arr2)
// {
//     int temp[5];
//     for (int  i = 0; i<5 ; i++)
//     {
//         temp[i] = arr1[i];
//     }
//     for (int i = 0; i < 5 ; i++)
//     {
//         arr1[i] = arr2[i];   
//     }
//     for (int i = 0; i<5 ; i++)
//     {
//         arr2[i] = temp[i];
//     }
// }
// int main()
// {
//     int a[]={10,20,30,40,50};
//     int b[] = {1,2,3,4,5};
//     swap(a,b);
//     printf("The new elements in array-1 are: ");
//     for (int i = 0 ; i< 5; i++)
//     {
//         printf("%d", a[i]);
//     }
//     printf("\n");
//     printf("The new elements in array-2 are: ");
//     for (int i = 0 ; i< 5; i++)
//     {
//         printf("%d", b[i]);
//     }
// }
// /*Add two matrix using Pointers*/
// int sum(int *arr1,int *arr2)
// {
//     int s[3][3];
//     for (int i =0 ; i<3;i++)
//     {
//         for (int j = 0; j<3 ; j++)
//         {
//             s[i][j] = arr1[i][j] + arr2[i][j];
//         }
//     }
// }
// int main()
// {
//     int a[3][3];
//     int b[3][3];
//     printf("Enter the elements for 1st Matrix: \n");
//     for (int i =0 ; i<3;i++)
//     {
//         for (int j = 0; j<3 ; j++)
//         {
//             printf("Enter the %d %d element: ", i+1, j+1);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Great, now enter elements for 2nd Matrix\n");
//     for (int i =0 ; i<3;i++)
//     {
//         for (int j = 0; j<3 ; j++)
//         {
//             printf("Enter the %d %d element: ", i+1, j+1);
//             scanf("%d", &b[i][j]);
//         }
//     }
//     sum(a,b);
// }
// /**/
#include <stdio.h>
#include <ctype.h>
#include <math.h>
int readability(char *string);
int main()
{
    char text[1000];
    int grade;
    printf("Text : ");
    scanf("%[^\n]", text);
    grade = readability(text);
    if (grade<1)
    {
        printf("Before Grade 1");
    }
    else if (grade >16)
    {
        printf("Grade 16+");
    }
    else {
        printf("Grade %d", grade);
    }
}
int readability(char *string)
{
    int letters=0,words=1, sentence = 0;
    for (int i = 0; string[i]!='\0' ; i++)
    {
        if (isalpha(string[i]))
        {
            letters++;
        }
        else if (string[i]==' ')
        {
            words++;
        }
        else if (string[i]=='!' || string[i]=='.' || string[i] == '?')
        {
            sentence++;
        }
    }
    float s,l;
    s = (float) sentence / words * 100;
    l = (float) letters / words * 100;
    float grade;
    grade = (0.0588*l) - (0.296*s) - 15.8;
    grade = round(grade);
    return grade;
}
