#include <stdio.h>

int main()
{
    int multiplicand, multiplier=1,result, max_multiplier;
    printf("Enter the multiplicand number:");
    scanf("%d", &multiplicand);
    printf("Enter the maximum multiplier number:");
    scanf("%d", &max_multiplier);
    for (multiplier = 1; multiplier <= max_multiplier;multiplier++)
    {
        result = multiplicand * multiplier;
        printf("%d * %d = %d\n", multiplicand, multiplier, result);
    }
    return 0;
}
