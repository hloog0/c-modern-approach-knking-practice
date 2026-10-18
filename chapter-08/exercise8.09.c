#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// generates a random walk across a 10x10 array
// contains '.' initially, and elements visited will be labeled by A-Z in order
// can only move to an adjacent, non-wall, unvisited spot
int main(void) {
    char field[10][10];
    bool can_up, can_right, can_down, can_left;
    int i, j;
    int ascii; // iterator for alphabet ascii (uppercase) 65-90
    int x_pos, y_pos, rand_direction;

    srand(time(NULL));
    x_pos = rand() % 10;
    y_pos = rand() % 10;

    // set up field
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            field[i][j] = '.';
        }
    }

    // place down first step
    printf("Starting position: (%d,%d)\n", x_pos, y_pos);   
    field[y_pos][x_pos] = 'A';

    // start walking
    for (ascii = 'B'; ascii < 'Z' + 1; ascii++) { // start at 'B'
        // pick random direction: 0 = up, 1 = right, 2 = down, 3 = left
        rand_direction = rand() % 4;
        // check legal moves
        if (y_pos - 1 < 0 || field[y_pos - 1][x_pos] != '.') {
            can_up = false;
        } else {
            can_up = true;
        }

        if (y_pos + 1 > 9 || field[y_pos + 1][x_pos] != '.') {
            can_down = false;
        } else {
            can_down = true;
        }

        if (x_pos - 1 < 0 || field[y_pos][x_pos - 1] != '.') {
            can_left = false;
        } else {
            can_left = true;
        }

        if (x_pos + 1 > 9|| field[y_pos][x_pos + 1] != '.') {
            can_right = false;
        } else {
            can_right = true;
        }

        // check if move is not valid or already surrounded
        if (can_up == false && can_right == false && can_down == false && can_left == false) {
            printf("Surrounded!!\n");
            break;
        }

        switch (rand_direction) {
            case 0: // up
                if (can_up) {
                    y_pos -= 1;
                    field[y_pos][x_pos] = ascii;
                    break;
                } else {
                    ascii--; // cancel out increment
                    break;
                }
            case 1: // right
                if (can_right) {
                    x_pos += 1;
                    field[y_pos][x_pos] = ascii;
                    break;
                } else {
                    ascii--;
                    break;
                }
            case 2: // down
                if (can_down) {
                    y_pos += 1;
                    field[y_pos][x_pos] = ascii;
                    break;
                } else {
                    ascii--;
                    break;
                }
            case 3: // left
                if (can_left) {
                    x_pos -= 1;
                    field[y_pos][x_pos] = ascii;
                    break;
                } else {
                    ascii--;
                    break;
                }
        }
    }

    // print out walked field
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%c ", field[i][j]);
        }
        printf("\n");
    }

    return 0;
}