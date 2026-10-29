
#include <stdio.h>
#include <string.h>
#define MAX 9
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
    for (int i = 0; i < voters_count; i++)
    {
        char voted[100];
        int valid_vote = 0;
        printf("Vote (Voter-%d):", i + 1);
        scanf(" %[^\n]", voted);
        for (int j = 0; j < candidate_count; j++)
        {
            if (strcmp(voted, c[j].name) == 0)
            {
                c[j].votes++;
                valid_vote = 1;
                break;
            }
        }
        if (valid_vote == 0)
        {
            printf("Invalid Candidate!\n");
            i--;
        }
    }
    printf("-------ELECTION-RESULTS-----------\n");
    int winner = c[0].votes;
    int win_index=0;
    for (int i = 0; i < candidate_count; i++)
    {
        if (winner < c[i].votes)
        {
            winner = c[i].votes;
            win_index=i;
        }
        printf("%s has %d votes\n", c[i].name, c[i].votes);
    }
    printf("-------WINNER---------\n");
    printf("Hence, the winner of the election is : %s", c[win_index].name);
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
