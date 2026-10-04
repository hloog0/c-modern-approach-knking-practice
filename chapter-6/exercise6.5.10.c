#include <stdio.h>
//asks user for dates mm/dd/yy; when user enters 0/0/0, outputs earliest date
//does not require realistic calendar-possible dates; 2/31/xx is still valid

int main(void) {
    int month, day, year;
    int month_earliest, day_earliest, year_earliest;
    int first_date = 1; //flag for first date inputted

    while (1) { //infinite loop
        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &month, &day, &year);

        if ((month == 0) && (day == 0) && (year == 0)) { // terminate for 0/0/0
            break;
        }

        if ((month <= 0 || month > 12) || (day <= 0 || day > 31)) { // invalid date (year != 0)
            printf("!! Invalid date !!\n");
            continue;
        }
        
        //check for first valid date input
        if (first_date == 1) {
            month_earliest = month;
            day_earliest = day;
            year_earliest = year;
            first_date = 0;

        } else if (year < year_earliest) { //earliest date check 
            month_earliest = month;
            day_earliest = day;
            year_earliest = year;
        } else if ((year == year_earliest) && (month < month_earliest)) {
            month_earliest = month;
            day_earliest = day;
        } else if ((year == year_earliest) && (month == month_earliest) && (day < day_earliest)) {
            day_earliest = day;
        }
    }

    if (first_date) { // sentinel date does not flip first_date flag
        printf("Program exited immediately with 0/0/0\n");
        return 0;
    } else {
        printf("%d/%d/%02d is the earliest date!\n",
            month_earliest, day_earliest, year_earliest);
    }

    return 0;
}
