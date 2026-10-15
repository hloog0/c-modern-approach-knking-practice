#include <stdio.h>
#include <ctype.h>

// asks user for 12-hour time, displays 24-hour form
// assume inputs are valid, accepts whitespace, capitalization after [hours]:[minutes]
int main(void) {
    int hours, minutes;
    int ch;

    printf("Enter a 12-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    while ((ch = toupper(getchar())) != '\n' && ch != EOF) {
        if (ch == ' ') {
            continue;
        } else if (ch == 'A') {
            if (hours == 12) { //12 AM is 00:00
                hours = 0;
                break;
            }
            break; // nothing to change
        } else if (ch == 'P') {
            if (hours != 12) { // 12 PM stays 12:00
                hours += 12;
            }
            break;
        }
    }

    printf("Equivalent 24-hour time: %02d:%02d\n", hours, minutes);
    return 0;
}
