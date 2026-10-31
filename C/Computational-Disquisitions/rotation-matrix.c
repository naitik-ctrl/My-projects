#include <stdio.h>

int main() {
    int a;
    printf("Enter the order of the matrix: ");
    scanf("%d", &a);
    
    int n[a][a];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("Enter (%d,%d) element of the matrix: ", i + 1, j + 1);
            scanf("%d", &n[i][j]);
        }
    }
    for (int i  = 0 ; i < a-1 ; i++)
    {
        for (int j = i+1; j < a ; j++)
        {
            int temp = n[i][j];
            n[i][j] = n[j][i];
            n[j][i]=temp;
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a / 2; j++) {
            int temp = n[i][j];
            n[i][j] = n[i][a - 1 - j];
            n[i][a - 1 - j] = temp;
        }
    }
    printf("\nRotated Matrix:\n");
    for (int i = 0; i < a; i++) {
        printf("[");
        for (int j = 0; j < a; j++) {
            printf("\t%d\t", n[i][j]);
        }
        printf("]\n");
    }

    return 0;
}
