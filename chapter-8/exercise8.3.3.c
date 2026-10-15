#include <stdio.h>
#include <stdbool.h>

// self-written version of repdigit.c so that user can enter more than one number
// terminates when user enters a number less or equal to 0
// assume valid input
int main(void) {
    bool digits_seen[10] = {false};
    long num;
    int digit, i;
    
    for (;;) {
        printf("Enter a number [less/equal to 0 to terminate]: ");
        scanf(" %ld", &num);

        if (num <= 0) { // sentinel
            break;
        }

        while (num > 0) {
            digit = num % 10; // last digit
            if (digits_seen[digit]) { // if already seen
                break;
            }
            digits_seen[digit] = true;
            num /= 10;
        }
        
        if (num > 0) { // stopped before num could be divided to 0
            printf("Repeated digit\n");
        } else {
            printf("No repeats!\n");
        }
    }

    printf("Program Exited\n");

    return 0;
}