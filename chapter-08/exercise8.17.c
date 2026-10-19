#include <stdio.h>

// prints a nxn magic square, user specifies n
// sums of rows, columns, and diagonals are all equal
int main(void) {
    int n, ch, i, j, k = 1, row, column;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter the size of the magic square: ");

    while ((scanf("%d", &n) != 1) || (n % 2 == 0) || (n < 1) || (n > 99)) {
        printf("**The size of the magic square must be an odd number between 1 and 99.\n");
        printf("Enter the size of the magic square: ");
        while ((ch = getchar()) != '\n' && ch != EOF) {
            // clear rest of input
        }
    }

    int magic_square[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            magic_square[i][j] = 0;
        }
    }

    row = 0;
    column = (n / 2);

    while(k <= n*n) {
        magic_square[row][column] = k;
        if (row - 1 < 0) {
            i = n-1;
        } else {
            i = row - 1;
        }
        if (column + 1 > n-1) {
            j = 0;
        } else {
            j  = column + 1;
        }

        // if the candidate spot is taken, move down a row from original position, guaranteed to be vacant for k <= n*n
        if (magic_square[i][j] > 0) {
            if (row + 1 > n-1) {
                i = 0;
            } else {
                i = row + 1;
            }
            j = column;
        }
        row = i;
        column = j;
        k++;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d   ", magic_square[i][j]);
        }
        printf("\n");
    }

    return 0;
}