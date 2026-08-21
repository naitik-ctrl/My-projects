#include <stdio.h>
#include <math.h>
void deposit(float *, float);
int withdraw(float *, float , float);


int main()
{
    printf("------------Welcome to CBS------------\n\n");
    int choice;
    float balance;
    float d_amount, w_amount;
    printf("Enter your Current balance: ");
    scanf("%f",&balance);

    printf("Enter '1' to Check your current balance.\n");
    printf("Enter '2' to Deposit funds into your account\n");
    printf("Enter '3' to withdraw funds from your account.\n");
    printf("Enter '4' to apply interest and project account growth over N months.\n");
    printf("Enter '5' to calculate your Loan EMI.\n");
    printf("Enter '6' to exit the application.\n\n");
    printf("----------------------------------------\n");
    printf("Specify your choice (1-6) to access the corresponding feature.:\n");
    scanf("%d", choice);
    switch (choice)
    {
    case 1:
        printf("Your current balance is : %f", balance);
        break;
    case 2: 
        printf("Enter the monetary amount to be credited to your account:");
        scanf("%f", &d_amount);
        deposit( &balance, d_amount);
        break;
    case 3:
        printf("Please specify the amount you wish to withdraw from your account:");
        break;
        withdraw(&balance, w_amount, balance);
    case 4:
        printf("Enter the number of months for which you wish to project your account's interest accrual:");
        break;
    case 5:
        printf("Please provide the requisite loan details to calculate your applicable EMI:");
        break;
    case 6:
        printf("-------THANK YOU-------");
        break;
    default:
        printf("Please enter a valid value (between 1-6)!");
        break;
    }
}
