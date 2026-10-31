
#include <stdio.h>
#include <string.h>
#define MAX 9
#define MAXVOTERS 100
struct candinfo
{
    int votes;
    char name[30];
};
int candicheck(int n);
int main()
{
    int candidate_count = 0;
    printf("Enter the number of candidates participating in the Election: ");
    scanf("%d", &candidate_count);
    int validity = candicheck(candidate_count);
    struct candinfo c[candidate_count];
    for (int i = 0; i < candidate_count; i++)
    {
        c[i].votes = 0;
    }
    if (validity)
    {

        for (int i = 0; i < candidate_count; i++)
        {
            printf("Enter the name of candidate-%d: ", i + 1);
            scanf(" %[^\n]", c[i].name);
        }
    }

    int voters_count;
    printf("\nPlease enter the number of voters participating: ");
    scanf("%d", &voters_count);
    int voters_validity = vtcheck(voters_count);
}
int candicheck(int n)
{
    if (n > MAX)
    {
        printf("The maximum number of allowed candidates are: %d", MAX);
        return 0;
    }
    return 1;
}
int vtcheck(int n)
{
    if (n > MAXVOTERS){
        printf("The maximum number of allowed candidates are: %d", MAX);
        return 0;
    }
    return 1;
}
