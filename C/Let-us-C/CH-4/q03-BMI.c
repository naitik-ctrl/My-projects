#include <stdio.h>

int main()
{
    float h, w, bmi;
    printf("Enter your weight(in kg): ");
    scanf("%f", &w);
    printf("Enter your height (in m):");
    scanf("%f", &h);
    bmi = w / (h*h);
    /* Check for Valid inputs by User */
    if (h >= 0 &&  w >= 0)
    {
        /* Check the BMI categories*/
        if  (bmi < 15)
        {
            printf("Your BMI is %.2f, this is due to Satrvation.", bmi);
        }
        else if (bmi >= 15.1 && bmi <= 17.5)
        {
            printf("Your BMI is %.2f, this is due to Anorexic", bmi);
        }
        else if (bmi >= 17.6 && bmi <= 18.5)
        {
            printf("Your BMI is %.2f, this is due to  Underweight", bmi);
        }
        else if (bmi >= 18.6 && bmi <= 24.9)
        {
            printf("Congratulations! You have the ideal BMI  of %.2f", bmi);
        }
        else if (bmi >= 25 && bmi <= 25.9)
        {
            printf("Your BMI is  %.2f, this is the case of Overweight", bmi);
        }
        else if (bmi >=30 && bmi <= 30.9)
        {
            printf("Your BMI is %.2f, this is the case of Obesity", bmi);
        }
        else if (bmi>=40)
        {
            printf("Your BMI is %.2f, this is the case of Morbid Obesity", bmi);
        }
        else
        {
            printf("Your BMI is %.2f, this is the case of Severe Obesity", bmi);
        }
    }
    /* Handle the case of negative values */
    else 
    {
        printf("Oops, you have entered negative set of values.Please recheck the input values and try again!");
    }   
    
}
