/* Matchstick Game between Computer and the user*/
/* COMPUTER WANTS TO WIN ALWAYS*/
#include <stdio.h>

int main()
{

    printf("<<<<<<<<<<<<<<  MATCHSTICK GAME   >>>>>>>>>>>>>>\n");
    printf("----------------------------------------------------\n");
    printf("Rules: Choose 1 to 4 sticks per turn.\n");
    printf("The player stuck with the last stick loses!\n\n");

    int matchsticks = 21;
    int sticks_taken;
    char turn;
    
    while (matchsticks > 1)
    {
        // Display the current state of the board before prompting the user
        printf("------------------------------------------\n");
        printf("Current matchsticks remaining: %d\n", matchsticks);
        
        do
        {
            printf("Your turn -> Enter sticks to choose (1-4): ");
            scanf("%d", &sticks_taken); 
            
            if (sticks_taken > 4 || sticks_taken < 1)
            {
                printf("Invalid move! Please select between 1 and 4.\n\n");
            }
            else 
            {
                matchsticks = matchsticks - sticks_taken;
            }
        }
        while (sticks_taken > 4 || sticks_taken < 1);
        
        turn = 'P'; // Player finished their action

        // Check if the loop should break early if player took the second-to-last stick
        if (matchsticks <= 1) {
            break;
        }

        // Computer calculates its move
        int computer_choice = (matchsticks - 1) % 5;
        if (computer_choice == 0)
        {
            computer_choice = 1;
        }
        
        matchsticks = matchsticks - computer_choice;
        printf("AI's turn  -> The computer takes %d stick(s).\n", computer_choice);
        turn = 'C'; // Computer finished its action
    }
    
    printf("               GAME OVER                  \n");
    printf("Final Matchstick remaining: 1\n");
    printf("YOU LOST, HAHA!");


    return 0;
}
