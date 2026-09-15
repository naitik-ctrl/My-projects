#include <stdio.h>
int main()
{
    int avg[5];
    float ag;
    for (int i=0;i<5;i++)
    {
        printf("Enter mark for student %d :", i);
        scanf("%d", &avg[i]);
    }
    ag = (avg[0] + avg[1]  + avg[2] + avg[3] +avg[4])/5.0;
    printf("the average score is : %f", ag);
}
