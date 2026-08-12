/*PROGRAM TO CALCULATE GRACE MARKS */
#include <stdio.h>
int main()
{
    int class, grace = 0;
    int grace_per_subject;
    int fail;
    printf("Enter your class:");
    scanf("%d" ,&class);
    printf("Number of subjects you failed: ");
    scanf("%d", &fail);
    switch (class)
    {
        case 1:
            if (fail <= 3)
            {
                grace_per_subject = 5;
            }
            else 
            {
                grace_per_subject = 0;
            }
            break;
        case 2:
            if (fail <= 2)
            {
                grace_per_subject = 4;
            }
            else 
            {
                grace_per_subject = 0;
            }
            break;
        case 3:
            if (fail <= 1)
            {
                grace_per_subject = 5;
            }
            else 
            {
                grace_per_subject = 0;
            }
            break;
        default:
            printf("You entered wrong values that doesn't match our records.");         
    }
    int total_grace=0;
    total_grace = grace_per_subject * fail;
    if (total_grace==0)
    {
        printf("You've got 0 grace marks");
    }
    else
    {
        printf("You've got %d grace marks", total_grace);
    }
}
