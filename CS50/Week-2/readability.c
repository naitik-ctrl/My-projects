#include <stdio.h>
#include <ctype.h>
#include <math.h>
int readability(char *string);
int main()
{
    char text[1000];
    int grade;
    printf("Text : ");
    scanf("%[^\n]", text);
    grade = readability(text);
    if (grade<1)
    {
        printf("Before Grade 1");
    }
    else if (grade >16)
    {
        printf("Grade 16+");
    }
    else {
        printf("Grade %d", grade);
    }
}
int readability(char *string)
{
    int letters=0,words=1, sentence = 0;
    for (int i = 0; string[i]!='\0' ; i++)
    {
        if (isalpha(string[i]))
        {
            letters++;
        }
        else if (string[i]==' ')
        {
            words++;
        }
        else if (string[i]=='!' || string[i]=='.' || string[i] == '?')
        {
            sentence++;
        }
    }
    float s,l;
    s = (float) sentence / words * 100;
    l = (float) letters / words * 100;
    float grade;
    grade = (0.0588*l) - (0.296*s) - 15.8;
    grade = round(grade);
    return grade;
}
