#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

#define MAX 6
#define MIN 1

int rool_dice(void);
bool play_game(void);

int main(int argc, char const *argv[])
{   
    char answer;
    int losses, wins;

    losses = wins = 0;
    srand((unsigned) time(NULL));

    do
    {
        if(play_game())
        {
            wins++;
            printf("You win!\n");
        }
        else
        {
            losses++;
            printf("You lose\n");
        }
        printf("Play again? (y/n) ");
        scanf("%c", &answer);
        getchar();
    }while(answer != 'n');

    printf("Wins: %d Losses: %d\n", wins, losses);

    return 0;
}

int rool_dice()
{
    return (rand() % (MAX - MIN + 1) + 1) + (rand() % (MAX - MIN + 1) + 1);
}

bool play_game()
{
    int point = rool_dice(), next_rool;

    printf("You rolled: %d\n", point);
    switch (point)
    {
    case 7: case 11:
        return true;
    case 2: case 3: case 12:
        return false;    
    default:
        break;
    }

    printf("Your point is %d\n", point);
    while (true)
    {
        next_rool = rool_dice();
        printf("You rolled %d\n", next_rool);
        if(next_rool == 7)
            return false;
        if (next_rool == point)
            return true;
        
    }
}