/* Smart Electricity  Bill Generator*/
#include <stdio.h>
#include <math.h> 

int main()
{
    /* cn :Consumer Number, cc: Consumer Category, uctm: Units Consumed This month, uclm: Units Consumed Last month , ps: Payement Status */
    int cn, uctm, uclm;
    char cc, ps;
    int valid = 1; 
    /* Read the consumer details required for bill generation */
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
    float ec = 0, ed = 0, fs = 0, total_bill = 0, lf = 0, reb = 0; /* ec: Electricity Charge, ed: Electricity Duty, fs: Fixed Surcharge, total_bill: Total Bill, lf:Late Fee, reb: Rebate*/
    int fc = 0; /* fc: Fixed Charge*/
    /* Calculate electricity charges based on the consumer category and tariff slabs */
    if (cc == 'D' || cc == 'd')
    {
        /* Calculate electricity charge based on units consumed */
        fc = 50; 
        if (uctm <= 100)
        {
            ec = (uctm * 3.50);
        }
        else if (uctm <= 300 )
        {
            ec = (100 *3.50) + ((uctm - 100 ) * 4.50);
        }
        else if (uctm <= 500)
        {
            ec = (100 * 3.50) + (200 * 4.50) + ((uctm - 300) * 6.00);
        }
        else
        {
            ec = (100 * 3.50) + (200 * 4.50) + ( 300 * 6.00) + ((uctm - 500) * 7.50);
        }
    }
    else if (cc == 'C' || cc == 'c')
    {
        fc = 150;
        if (uctm <=100)
        {
            ec= (uctm * 6.00);
        }
        else if (uctm <=300)
        {
            ec = (100 * 6.00) + ((uctm - 100)* 7.50);
        }
        else
        {
            ec = (100 *6.00) + ( 200 * 7.50) + ((uctm - 300) * 9.00);
        }

    }
    else if (cc == 'I' || cc == 'i')
    {
        fc = 500;
        if (uctm <= 500)
        {
            ec = (uctm * 5.50);
        }
        else
        {
            ec = (500 * 5.50) + ((uctm - 500) * 6.50);
        }
    }
    /* Validate the consumer category before proceeding with bill calculations */
    else 
    {
        printf("\n Invalid Customer Category!\n");
        valid = 0;
    }
    /* Compute additional charges, rebates, and late-fee based on consumption and payment status */
    if (valid)
    {
        ed = 0.05 * ec;

        if (uclm > 0 && (uctm - uclm > (uclm * 0.2)))
        {
            fs = 0.02 * ec;
        }
        else
        {
            fs = 0;
        }

        if (ps == 'n' || ps == 'N')
        {
            lf = 0.02 * (ec + fc + ed + fs);
            reb = 0;
        }
        else if ((ps == 'y' || ps == 'Y') && (cc == 'D' || cc == 'd'))
        {
            lf = 0;
            reb = 0.01 * ec;
        }
        else
        {
            lf = 0;
            reb = 0;
        }
    /* Display the detailed electricity bill */
    total_bill = ec + fc + ed + fs + lf - reb;
    printf("\n Energy Charges : Rs. %.2f", ec);
    printf("\n Fixed Charges : Rs. %.2f", fc);
    printf("\n Electricity Duty : Rs. %.2f", ed);
    printf("\n Fixed Surcharge : Rs. %.2f", fs);
    printf("\n Late Fee : Rs. %.2f", lf);
    printf("\n Rebate : Rs. %.2f", reb);
    printf("\n Total Bill : Rs. %.2f", total_bill);
    return 0;
    }
}
