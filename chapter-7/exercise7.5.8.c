#include <stdio.h>
#include <ctype.h>

// modification of prog proj 8 from chapter 5
// user now enters time in a 12-hour clock format followed by either:
// A, P, AM, PM; whitespace and capitalization are optional
// assume input is valid
int main(void) {
    int hours_12, minutes, minutes_since_midnight;
    int ch;

    printf("Enter a time in 12-hour format: ");
    scanf("%2d:%2d", &hours_12, &minutes);

    if (hours_12 == 12) { // 12 AM is 00:00, 12 PM is 12:00
        hours_12 = 0;
    }
    minutes_since_midnight = hours_12 * 60 + minutes;

    while ((ch = toupper(getchar())) != '\n' && ch != EOF) {
        if (ch == 'P') {
            minutes_since_midnight += 12 * 60;
            break;
        } else if (ch == 'A') {
            break;
        }
    }

    /*
    departure time:     arrival time:
     480 min 8:00 am       10:16 am
     583 min 9:43 am       11:52 am
     679 min 11:19 am       1:31 pm
     767 min 12:47 pm       3:00 pm
     840 min 2:00 pm        4:08 pm
     945 min 3:45 pm        5:55 pm
    1140 min 7:00 pm        9:20 pm
    1305 min 9:45 pm        11:58 pm
    */

    // times before 2:53 AM are closer to the previous night's 9:45 PM flight
    // (midpoint of 9:45 PM and the next day's 8:00 AM is 172.5 min past midnight)
    if (minutes_since_midnight < 173) {
        printf("Closest departure time is 9:45 PM, arriving at 11:58 PM\n");
    } else if (minutes_since_midnight < 532) {
        printf("Closest departure time is 8:00 AM, arriving at 10:16 AM\n");
    } else if (minutes_since_midnight < 632) {
        printf("Closest departure time is 9:43 AM, arriving at 11:52 AM\n");
    } else if (minutes_since_midnight < 724) {
        printf("Closest departure time is 11:19 AM, arriving at 1:31 PM\n");
    } else if (minutes_since_midnight < 804) {
        printf("Closest departure time is 12:47 PM, arriving at 3:00 PM\n");
    } else if (minutes_since_midnight < 893) {
        printf("Closest departure time is 2:00 PM, arriving at 4:08 PM\n");
    } else if (minutes_since_midnight < 1043) {
        printf("Closest departure time is 3:45 PM, arriving at 5:55 PM\n");
    } else if (minutes_since_midnight < 1223) {
        printf("Closest departure time is 7:00 PM, arriving at 9:20 PM\n");
    } else {
        printf("Closest departure time is 9:45 PM, arriving at 11:58 PM\n");
    }

    return 0;
}
