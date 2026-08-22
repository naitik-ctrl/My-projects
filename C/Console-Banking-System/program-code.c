#include <stdio.h>
#include <math.h>
void deposit(float *, float);
void withdraw(float *);
// void applyInterest(float *balance, int months, float annualRate);
void categorycheck(int *);

int main()
{
    printf("------------Welcome to CBS------------\n\n");
    int choice, ctgry, n;
    float balance, ar;
    float d_amount, w_amount;
    categorycheck(&ctgry);
    printf("Now, Enter your Account Balance: $");
    scanf("%f", &balance);
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
        printf("Specify your choice (1-6) to access the corresponding feature.:\n");
        scanf("%d", &choice);
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
            withdraw(&balance);
            printf("Current Balance: $%.2f\n", balance);
            break;
            // case 4:
            //     printf("Enter the number of months for which you wish to project your account's interest accrual:");
            //     scanf("%f",&n);
            //     applyInterest(&balance, n, ar);
            //     break;
            // case 5:
            //     printf("Please provide the requisite loan details to calculate your applicable EMI:");
            //     break;
            default:
                printf("Please enter a valid value (between 1-6)!\n");
                break;
        }

    } while (choice != 6 );
}
void deposit(float *balance, float d)
{
    *balance = *balance + d;
    printf("$%.2f is successfully deposited to your bank acoount!\n", d);
    printf("----------------------------------------------------\n");
}
void withdraw(float *balance)
{
    int flag = 0;
    do
    {
        float w_amount;
        printf("Please specify the amount you wish to withdraw from your account:");
        scanf("%f", &w_amount);
        if (w_amount > *balance)
        {
            printf("Transaction declined. The requested amount exceeds your available balance.\n");
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

    printf("Withdrawal transaction completed successfully. $%.2f has been debited from your account.\n", withdraw);
    printf("----------------------------------------------------\n");
}
void categorycheck(int *category)
{
    printf("----------------------------------------\n");
    printf("'1' represents Savings account\n");
    printf("'2' represents Current account\n");
    printf("'3' represents Salary account\n");
    do
    {

        printf("----------------------------------------\n");
        printf("Select your account category: ");
        scanf("%d", category);
        switch (*category)
        {
        case 1:
            printf("You have logged into your Savings account!\n");
            break;
        case 2:
            printf("You have logged into your Current account!\n");
            break;
        case 3:
            printf("You have logged into your Salary account!\n");
            break;
        default:
            printf("Please enter a valid category!\n");
            break;
        }
    } while (*category > 3 || *category < 1);
}
