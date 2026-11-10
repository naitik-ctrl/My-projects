#include <stdio.h>
#include <string.h>
#define MAXCANDIDATES 9
#define MAXVOTERS 100
/* DataBase */
int voters_count;
struct candinfo
{
    int votes;
    char name[100];
    bool eliminated;
};

/* Functions required for the algorithm */
int candicheck(int n);
void tabulate();
bool vote(int voter , int rank, char name[])


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
        c[i].eliminated = false;
    }
    if (validity)
    {

        for (int i = 0; i < candidate_count; i++)
        {
            printf("Enter the name of candidate-%d: ", i + 1);
            scanf(" %[^\n]", c[i].name);
        }
    }

    printf("\nPlease enter the number of voters participating: ");
    scanf("%d", &voters_count);
    int voters_validity = vtcheck(voters_count);
    if (voters_validity)
    {
        int preferences[voters_count][candidate_count];
        
    }
    else{
        printf("Invalid number of voters!");
    }
}
int candicheck(int n)
{
    if (n > MAXCANDIDATES)
    {
        printf("The maximum number of allowed candidates are: %d", MAXCANDIDATES);
        return 0;
    }
    return 1;
}
int vtcheck(int n)
{
    if (n > MAXVOTERS){
        printf("The maximum number of allowed candidates are: %d", MAXCANDIDATES);
        return 0;
    }
    return 1;
}
bool vote(int voter , int rank, char name[]){

}
void tabulate()
{
    for (int i = i ; i < voters_count ; i++)
    {
        // TODO
    }
}
