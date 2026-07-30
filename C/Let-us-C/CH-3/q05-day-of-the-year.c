#include <stdio.h>

int main()
{
    /* Initialize the variables*/
    int year, elapsed_years, total_days, day;
    printf("Enter the year: ");
    scanf("%d", &year);
    /* Count the year which have finished*/
    elapsed_years = year - 1;
    /* Count the number of days passed according to the Gregorian Calender*/
    total_days = (elapsed_years * 365 ) + (year / 4) + (year / 400) - (year / 100);
    day = total_days % 7; 

    if (day==0)
    {
        printf("The day is Monday,for the year: %d", year);
    }
    else if (day == 1)
    {
        printf("The day is Tuesday, for the year: %d", year);
    }
    else if (day == 2)
    {
        printf("The day is Wednesday, for the year: %d", year);
    }
    else if (day == 3)
    {
        printf("The day is Thursday, for the year: %d", year);
    }
    else if (day == 4)
    {
        printf("The day is Friday, for the year: %d", year);
    }
    else if (day == 5)
    {
        printf("The day is Saturday, for the year: %d", year);
    }
    else if (day == 6)
    {
        printf("The day is Sunday, for the year: %d", year);
    }
    
}
