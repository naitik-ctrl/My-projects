#include <stdio.h>
void cipher(char plaintext[], char newabcd[])
{
    char ciphertext[1000];
    int i,j;
    for (i =0,j=0; plaintext[i]!='\0' ; i++)
    {
        int index = plaintext[i] - 'A';
        if (0<=index<=26)
        {
            ciphertext[j]=newabcd[index];
            j++;
        }
    }
    ciphertext[j] = '\0';
    printf("Ciphertext: ");
    for(i = 0;ciphertext[i]!='\0' ; i++)
    {
        printf("%c", ciphertext[i]);
    }
}
int main()
{
    char plaintext[1000],calpha[26];
    int count=0;
    printf("Enter 26 characters: ");
    for(int i=0;i<26;i++){
        scanf("%c",&calpha[i]);
        if((calpha[i] < 65 || calpha[i] > 90) && (calpha[i] < 97 || calpha[i] > 122)){
            printf("Please enter a Character: ");
            i--;
            continue;
        }
    }
    printf("Plaintext: ");
    scanf(" %[^\n]", plaintext);
    cipher(plaintext, calpha);
}
