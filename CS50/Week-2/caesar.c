#include <stdio.h>
#include <ctype.h>
void cipher(char plaintext[], int *);
int main()
{
    int k;
    char ptext[1000];
    printf("Enter the key for ciphertext: ");
    scanf("%d", &k);
    printf("Enter the plaintext: ");
    scanf(" %[^\n]", ptext);
    cipher(ptext, &k);
    
}
void cipher(char plaintext[], int *key)
{
    char ctext[1000];
    int shift = ((*key % 26) + 26) % 26;
    int i = 0; 
    for ( i = 0 ; plaintext[i]!='\0' ; i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                ctext[i]=(plaintext[i] - 'A' + shift) % 26 + 'A';
            }
            else if (islower(plaintext[i]))
            {
                ctext[i]=(plaintext[i] - 'a' + shift) % 26 + 'a';
            }
        }
        else {
            ctext[i] = plaintext[i];
        }
    }
    ctext[i]='\0';
    printf("Ciphertext: %s\n", ctext);
}
