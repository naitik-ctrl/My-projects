#include <stdio.h>
int main()
{
    int n, x1, x2, x3, x4, x5;
    long int result;
    printf("Enter the 5-digit number to be reversed: \n");
    scanf("%d", &n);
    x1 = n%10;   /* we know that, % gives us the remainder, we use it to extract the last digit.*/
    n = n/10;   /* Now, since we got the last digit of the number, we need to get the second-last digit too. We use '/' operator, which removes the last digit. For ex: 12345 / 5 = 1234 */
    x2 = n%10;
    n = n/10;
    x3 = n%10;
    n = n/10;
    x4 = n%10;
    n = n/10;
    x5 = n%10;
    result  = (x1 *10000) + (x2*1000) + (x3*100) + (x4*10) + x5 ; 
    printf("\nThe reversed number of the entered number is: %ld", result);
    return 0;
}
