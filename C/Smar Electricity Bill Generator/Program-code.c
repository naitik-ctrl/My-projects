/* Smart Daily Expenses and Budget-Analyzer*/
#include <stdio.h>
#include <math.h> 

int main()
{
    /* cn :Consumer Number, cc: Consumer Category, uctm: Units Consumed This month, uclm: Units Consumed Last month , ps: Payement Status */
    int cn, uctm, uclm;
    char cc, ps;
    printf("\nEnter Consumer Number: ");
    scanf("%d", &cn);
    printf("Enter Consumer Category (D,C,I): ");
    scanf(" %c", &cc);
    printf("Enter Units Consumed This Month: ");
    scanf("%d", &uctm);
    printf("Enter Units Consumed Last Month: ");
    scanf("%d", &uclm);
    printf("Enter Payment Status (y/n): ");
    scanf(" %c", &ps); 
    float ec, ed, fs, total_bill, lf, reb; /* ec: Electricity Charge, ed: Electricity Duty, fs: Fixed Surcharge, total_bill: Total Bill, lf:Late Fee, reb: Rebate*/
    int fc; /* fc: Fixed Charge*/
    if (cc == 'D' || cc == 'd')
    {
        fc = 50; 
        for (float i = 0, j = 3.50; i <= uctm && j <= 7.50; i = i + 100.00, j = j + 1.50)
        {
            /* Calculate electricity charge based on units consumed */
            ec = 0;


        }

    }
}
