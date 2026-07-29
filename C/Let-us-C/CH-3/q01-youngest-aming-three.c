#include <stdio.h>

int main()
{
    int ram_age, shyam_age, ajay_age;
    printf("Enter Ram's age: ");
    scanf("%d", &ram_age);
    printf("Enter Shyam's age: ");
    scanf("%d", &shyam_age);
    printf("Enter ajay's age: ");
    scanf("%d", &ajay_age);
    if (ram_age < shyam_age && ram_age< ajay_age)
    {
        printf("Ram is the youngest among the three!");
    }
    else if (ajay_age < shyam_age && ajay_age < ram_age)
    {
        printf("Ajay is the youngest among the three!");
    }
    else if (ram_age==shyam_age && shyam_age == ajay_age)
    {
        printf("All are of equal ages!");
    }
    else 
    {
        printf("Shyam is the youngest among the three!");
    }
}
