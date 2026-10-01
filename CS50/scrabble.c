#include <stdio.h>
#include <string.h>
int scrabble(char word[]);
int main()
{
    char ch1[100],ch2[100];
    int count1=0, count2=0;
    printf("Enter the 1st word: ");
    scanf("%s",ch1);
    printf("Enter the 2nd word: ");
    scanf("%s",ch2);
    count1 = scrabble(ch1);
    count2 = scrabble(ch2);
    if (count1>count2)
    {
        printf("Player 1 wins!");
    }
    else if (count1<count2)
    {
        printf("Player 2 wins!");
    }
    else{
        printf("Tie!");
    }

}
int scrabble(char word[])
{
    int count=0;
    int alpha[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    for (int i = 0; word[i] !='\0' ; i++)
    {
        int index = word[i] - 'A';
        count += alpha[index];
    }
    return count;
}

