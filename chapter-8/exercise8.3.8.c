#include <stdio.h>

#define STUDENT_COUNT 5
#define QUIZ_COUNT 5
// modification of exercise 7
// prompts for five quiz grades for each of five students
// computes total, and average score for each student, as well as 
// average, high, and low for each quiz
// assume valid input
int main(void) {
    double quiz_scores[STUDENT_COUNT][QUIZ_COUNT];
    int i, j;
    double row_sum = 0.0;
    double high_scores[QUIZ_COUNT];
    double low_scores[QUIZ_COUNT];
    double quiz_totals[QUIZ_COUNT] = {0};

    printf("Enter student grades [five numerical grades (0-100) separated by spaces]\n");
    for (i = 0; i < STUDENT_COUNT; i++) {
        printf("Enter Student %d Grades: ", i + 1);
        scanf("%lf %lf %lf %lf %lf",
             &quiz_scores[i][0], &quiz_scores[i][1], &quiz_scores[i][2], &quiz_scores[i][3], &quiz_scores[i][4]);
    }

    // fill in high and low scores using the first student
    for (i = 0; i < QUIZ_COUNT; i++) {
        high_scores[i] = quiz_scores[0][i];
        low_scores[i] = quiz_scores[0][i];
    }
    
    // calculate student stats
    printf("\n\t    Total Score   Average Score\n");
    for (i = 0; i < STUDENT_COUNT; i++) {
        printf("Student %d:", i + 1); // Student #:
        for (j = 0; j < QUIZ_COUNT; j++) {
            row_sum += quiz_scores[i][j];
            quiz_totals[j] += quiz_scores[i][j];

            if (quiz_scores[i][j] > high_scores[j]) { // check if current quiz score read is higher than highest for that quiz
                high_scores[j] = quiz_scores[i][j];
            }
            if (quiz_scores[i][j] < low_scores[j]) { // check if current quiz score read is lower than lower for that quiz
                low_scores[j] = quiz_scores[i][j];
            }
        }
        printf("%10.2f%15.2f\n", row_sum, row_sum / (double)QUIZ_COUNT);
        row_sum = 0.0; //reset row sum
    }

    printf("\n\t  Average Score   High Score   Low Score\n");
    for (i = 0; i < QUIZ_COUNT; i++) {
        printf("Quiz %d:", i + 1);
        printf("%12.2f%15.2f%11.2f\n", 
        quiz_totals[i] / (double)STUDENT_COUNT, high_scores[i], low_scores[i]);
    }

    return 0;
}

// example test grades
/*
99 98 100 97 98
78 67 80 82 86
94 93 95 96 93
34 35 64 35 41
88 87 84 92 93
*/