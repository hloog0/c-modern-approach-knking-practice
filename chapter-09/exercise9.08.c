#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>



// simulates the game of 'craps', played with two dice
// on the first roll, the player wins if the sum of the dice is 7 or 11
// but the player loses if the sum is 2, 3, or 12
// otherwise the roll is called the "point", game continues
// now on each subsequent roll if the player rolls the "point" again, they win, and lose if they roll 7, all other rolls ignored

// program simulates this game, and at the end of each game, program asks user whether or not to play again
// if user enters a response other than y or Y, program will display number of wins and losses and then terminate

int roll_dice(void);
bool play_game(void);

int main(void) {
    int ch, wins = 0, losses = 0;

    srand(time(NULL));

    // play game until user deicdes they don't want to play anymore
    while (true) {
        if (play_game()) {
            printf("You win!\n\n");
            wins++;
        } else {
            printf("You lose..\n\n");
            losses++;
        }
        printf("Play again? ");
        if ((ch = getchar()) != 'y' && ch != 'Y') {
            break;
        } else {
            while ((ch = getchar()) != '\n' && ch != EOF) {
                // clear input buffer
            }
        }
    }

    printf("Wins: %d  Losses: %d\n", wins, losses);

    return 0;
}

int roll_dice(void) {
    // generates two random numbers
    int dice_1 = (rand() % 6) + 1;
    int dice_2 = (rand() % 6) + 1;

    return dice_1 + dice_2;
}

bool play_game(void) {
    int current_roll = roll_dice();
    int point;


    printf("You rolled: %d\n", current_roll);
    // first roll
    if (current_roll == 7 || current_roll == 11) { // win
        return true;
    } else if (current_roll == 2 || current_roll == 3 || current_roll == 12) { // lose
        return false;
    } else { // continue the game with "point"
        point = current_roll;
        printf("Your point is %d\n", point);
    }

    // keep rolling until 7 or point
    while (true) {
        current_roll = roll_dice();
        printf("You rolled: %d\n", current_roll);
        if (current_roll == 7) {
            return false;
        } else if (current_roll == point) {
            return true;
        }
    }
}