#include <stdio.h>

// converts 24-hour time to 12-hour time (AM/PM)
int main(void) {
    int hours, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);
    printf("Equivalent 12-hour time: ");
    switch (hours) {
        case 0:     printf("12:"); 
                    break;
        case 1:     printf("1:");
                    break;
        case 2:     printf("2:"); 
                    break;
        case 3:     printf("3:");
                    break;
        case 4:     printf("4:"); 
                    break;
        case 5:     printf("5:");
                    break;
        case 6:     printf("6:"); 
                    break;
        case 7:     printf("7:");
                    break;
        case 8:     printf("8:"); 
                    break;
        case 9:     printf("9:");
                    break;
        case 10:    printf("10:"); 
                    break;
        case 11:    printf("11:");
                    break;
        case 12:    printf("12:"); 
                    break;
        case 13:    printf("1:");
                    break;
        case 14:    printf("2:"); 
                    break;
        case 15:    printf("3:");
                    break;
        case 16:    printf("4:"); 
                    break;
        case 17:    printf("5:");
                    break;
        case 18:    printf("6:"); 
                    break;
        case 19:    printf("7:");
                    break;
        case 20:    printf("8:"); 
                    break;
        case 21:    printf("9:");
                    break;
        case 22:    printf("10:"); 
                    break;
        case 23:    printf("11:");
                    break;
        case 24:    printf("12: ");
                    break;
        default:    printf("invalid hour");
                    return 1;
    }
    printf("%02d ", minutes);
    switch (hours) {
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
        case 8: case 9: case 10: case 11:
            printf("AM");
            break;
        case 12: case 13: case 14: case 15: case 16: case 17: case 18:
        case 19: case 20: case 21: case 22: case 23:
            printf("PM");
            break;
        case 24:
            printf("AM");
            break;
    }
    return 0;
}