//returns letter grade for numerical grade

#include <stdio.h>

int main(void) {
    int grade, grade_tens, grade_ones;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade > 100 || grade < 0) {
        printf("Error: Grade must be between 0 and 100");
        return 1;
    } else {
        printf("Letter grade: ");
    }

    grade_tens = grade / 10;
    grade_ones = grade % 10;

    switch (grade_tens) {
        case 10: case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default: // anything below 60 is failing
            printf("F");
            break;
    }

    return 0;
}