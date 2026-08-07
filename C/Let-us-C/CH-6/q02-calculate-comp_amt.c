/*Calculate the compounded amount 10 times*/
#include <stdio.h>
#include <math.h>

int main()
{
    float p,r,n,q,a;
    int count;
    for (count = 0; count<=10;)
    {
        printf("\nEnter the values of p,r,n,q: ");
        scanf("%f%f%f%f", &p, &r, &n, &q);
        /* Apply the formula*/
        a = p*(pow((1+(r/q)), n*q));
        /* Display the output*/
        printf("The compunded amount for principal amt:%f, at the rate of: %f, over %f years compounded %f times/yr is: %f", p,r,n,q,a);
        count = count + 1;
    }
    
}
