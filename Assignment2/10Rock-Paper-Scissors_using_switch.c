/*This Code Does this
Two players enter:
1 → Rock
2 → Paper
3 → Scissors
Implement a C program using switch and if-else to determine:
• Player 1 Wins
• Player 2 Wins
• Draw
• Invalid Input if either player enters anything other than 1, 2, or 3. */
#include <stdio.h>
int main()
{
    int Player1, Player2;
    scanf("%d %d", &Player1, &Player2);
    if (Player1 < 1 || Player1 > 3 || Player2 < 1 || Player2 > 3)
    {
        printf("Invalid Input");
    }
    else if (Player1 == Player2)
    {
        printf("Draw");
    }
    else
    {
        switch (Player1)
        {
            case 1:
                if (Player2 == 2)
                    printf("Player 2 Wins");
                else
                    printf("Player 1 Wins");
                break;

            case 2:
                if (Player2 == 3)
                    printf("Player 2 Wins");
                else
                    printf("Player 1 Wins");
                break;

            case 3:
                if (Player2 == 1)
                    printf("Player 2 Wins");
                else
                    printf("Player 1 Wins");
                break;
        }
    }
    return 0;
}