#include <stdio.h>

// reads a 5x5 array of integers, then prints the row sums and column sums
int main(void) {
    int my_array[5][5];
    int i, j, row_sum = 0, column_sum = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter row %d [5 integers separated by spaces]: ", i + 1);
        scanf(" %d %d %d %d %d",
             &my_array[i][0], &my_array[i][1], &my_array[i][2], &my_array[i][3], &my_array[i][4]);
    }

    printf("\nRow totals:");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            row_sum += my_array[i][j];
        }
        printf(" %d", row_sum);
        row_sum = 0;
    }

    printf("\nColumn totals:");
    for (i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            column_sum += my_array[j][i];
        }
        printf(" %d", column_sum);
        column_sum = 0;
    }
    printf("\n");

    return 0;
}