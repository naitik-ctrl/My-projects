#include <stdio.h>
#include <math.h>
/*Declare the Functions*/
void deposit(float *, float);
void withdraw(float *, int *);
void applyInterest(float *balance, float *annualRate);
void categorycheck(int *, float *, int *);
void calculate_emi(float *, float *);

int main()
{
    printf("==========Welcome to CBS==========\n\n");
    /*Declarationo of required varaibles*/
    int choice, ctgry, n, min_bal;
    float balance, ar;
    float d_amount = 0.0, w_amount = 0.0;
    float emi, total_interest;
    /*Ask User to select category of their account*/
    categorycheck(&ctgry, &ar, &min_bal);
    do
    {
        printf("Now, Enter your Account Balance: $");
        scanf("%f", &balance);
        /*Check if the user enters money equivalent to mimimum balance for the desired account */
        if (balance <= min_bal)
        {
            printf("\nThe account balance must be greater or equal to Minimmum balance for the desired account.\n");
        }
    } while (balance <= min_bal);
    /*Display the available features to the User*/
    printf("----------------------------------------\n");
    printf("Enter '1' to Check your current balance.\n");
    printf("Enter '2' to Deposit funds into your account\n");
    printf("Enter '3' to withdraw funds from your account.\n");
    printf("Enter '4' to apply interest and project account growth over N months.\n");
    printf("Enter '5' to calculate your Loan EMI.\n");
    printf("Enter '6' to exit the application.\n\n");
    do
    {

        printf("----------------------------------------\n");
        printf("Specify your choice (1-6) to access the corresponding feature :\n");
        scanf("%d", &choice);
        /*Respond to the selected choice by User.*/
        switch (choice)
        {
        case 1:
            printf("Your current balance is : $%.2f\n", balance);
            break;
        case 2:
            printf("Enter the monetary amount to be credited to your account: $");
            scanf("%f", &d_amount);
            deposit(&balance, d_amount);
            printf("Current Balance: $%.2f\n", balance);
            break;
        case 3:
            withdraw(&balance, &min_bal);
            printf("Current Balance: $%.2f\n", balance);
            break;
        case 4:
            applyInterest(&balance, &ar);
            break;
        case 5:
            calculate_emi(&emi, &total_interest);
            break;
        case 6:
            break;
        default:
            printf("Please enter a valid value (between 1-6)!\n");
            break;
        }

    } while (choice != 6);
}

void categorycheck(int *category, float *ar, int *min_bal)
{
    printf("----------------------------------------\n");
    printf("'1' represents Savings account(Min. Balance = $1000, Annual Rate: 4%c)\n",'%');
    printf("'2' represents Current account(Min. Balance = $5000, Annual Rate 0%c)\n", '%');
    printf("'3' represents Salary account(Min. Balance = $0, Annual Rate: 2%c)\n", '%');
    do
    {

        printf("----------------------------------------\n");
        printf("Select your account category: ");
        scanf("%d", category);
        switch (*category)
        {
        case 1:
            printf("You have logged into your Savings account!\n");
            *ar = 0.04;
            *min_bal = 1000;
            break;
        case 2:
            printf("You have logged into your Current account!\n");
            *ar = 0.0;
            *min_bal = 5000;
            break;
        case 3:
            printf("You have logged into your Salary account!\n");
            *ar = 0.02;
            *min_bal = 0;
            break;
        default:
            printf("Please enter a valid category!\n");
            break;
        }
    } while (*category > 3 || *category < 1);
}
void deposit(float *balance, float d)
{
    /*Check if users enters value equal to zero or less than that.*/
    if (d <= 0)
    {
        printf("\nInvalid transaction amount. Deposits must consist of a positive monetary value greater than zero.\n");
    }
    else
    {
        *balance = *balance + d;
        printf("$%.2f is successfully deposited to your bank acoount!\n", d);
    }
    printf("----------------------------------------------------\n");
}
void withdraw(float *balance, int *min_bal)
{
    int flag = 0;
    do
    {
        float w_amount;
        printf("Please specify the amount you wish to withdraw from your account:");
        scanf("%f", &w_amount);
        /*The final amount after the withdrawal should not be less than the minimum balance.*/
        if ((*balance - w_amount) < *min_bal)
        {
            printf("Transaction declined.\n");
        }
        else if (w_amount <= 0)
        {
            printf("Please enter a valid amount greater than 0. \n\n");
        }
        else
        {
            *balance = *balance - w_amount;
            printf("Withdrawal completed successfully. $%.2f debited.\n", w_amount);
            printf("----------------------------------------------------\n");
            flag = 1;
            break;
        }
    } while (flag != 1);
}
void applyInterest(float *balance, float *annual_rate)
{
    float proj_bal = *balance, monthly_rate;
    int n;
    monthly_rate = *annual_rate / 12;
    printf("Enter the number of months for which you wish to project your account's interest accrual:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        /*Project monthly based on the interest*/
        proj_bal = proj_bal * (1 + monthly_rate);
        printf("Month %d : %.2f\n", i, proj_bal);
    }
}
void calculate_emi(float *emiout, float *totalinterestout)
{
    float r, total_payment;
    float principal, annual_rate;
    int months;
    float income;
    char eligibility;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Now, Enter the annual rate of the Loan:");
    scanf("%f", &annual_rate);
    printf("Finally, Enter the time-period of the loan(in months): ");
    scanf("%d", &months);
    printf("Enter your monthly income to check if you're eligible for a loan: ");
    scanf("%f", &income);
    r = annual_rate / 1200;
    *emiout = ((principal * r) * pow(1 + r, months)) / (pow(1 + r, months) - 1);
    total_payment = *emiout * months;
    *totalinterestout = total_payment - principal;
    printf("-------LOAN EMI CALCULATION---------\n");
    printf("EMI   : %.2f\n", *emiout);
    printf("Total Payment  : %.2f\n", total_payment);
    printf("Total Interest   : %.2f\n", *totalinterestout);
    /*Check whether if a user should take a loan or not*/
    eligibility = (*emiout <= (income * 0.5)) ? 'y' : 'n';
    printf("Eligibility     : %c\n", eligibility);
}
