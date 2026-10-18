
#include <stdio.h>

// prints the closest departure time and its arrival time to entered time
int main(void) {
    int hours_24, minutes, minutes_since_midnight;
    
    printf("Enter a time in 24-hour format: ");
    scanf("%2d:%2d", &hours_24, &minutes);
    minutes_since_midnight = (hours_24 * 60) + minutes;
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
    if (minutes_since_midnight < 532) {
        printf("Closest departure time is 8:00 AM, arriving at 10:16 AM");
    } else if (minutes_since_midnight < 632) {
        printf("Closest departure time is 9:43 AM, arriving at 11:52 AM");
    } else if (minutes_since_midnight < 724) {
        printf("Closest departure time is 11:19 AM, arriving at 1:31 PM");
    } else if (minutes_since_midnight < 804) {
        printf("Closest departure time is 12:47 PM, arriving at 3:00 PM");
    } else if (minutes_since_midnight < 893) {
        printf("Closest departure time is 2:00 PM, arriving at 4:08 PM");
    } else if (minutes_since_midnight < 1043) {
        printf("Closest departure time is 3:45 PM, arriving at 5:55 PM");
    } else if (minutes_since_midnight < 1223) {
        printf("Closest departure time is 7:00 PM, arriving at 9:20 PM");
    } else {
        printf("Closest departure time is 9:45 PM, arriving at 11:58 PM");
    }
    
    return 0;
}