#include <stdio.h>
//asks the user for # of days, which day of the week month begins; outputs calendar

int main(void) {
    int num_days, month_begin, day_of_week;

    printf("Enter number of days in month: ");
    scanf("%d", &num_days);

    //no month has more than 31 days or less than 28 days
    while (num_days > 31 || num_days < 28) {
        if (num_days > 31) {
            printf("!! No month has more than 31 days!\n");
        } else if (num_days < 28) {
            printf("!! No month has less than 28 days!\n");
        }
        
        //ask again
        printf("Enter number of days in month: ");
        scanf("%d", &num_days);
    }

    printf("Enter starting day of the week (1 = Sun, 7 = Sat): ");
    scanf("%d", &month_begin);

    day_of_week = month_begin;

    int i = 1;
    while (i < month_begin) {
        printf("   "); // empty space before month start (three spaces)
        i++;
    }

    int n = 1;
    while (n <= num_days) {
        if (day_of_week == 7) { // if saturday, new line and return to sunday
            printf("%2d ", n);
            printf("\n");
            day_of_week = 1;
            n++;
        } else {
            printf("%2d ", n);
            day_of_week += 1;
            n++;
        }
    }

    return 0;
}
