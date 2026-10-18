#include <stdio.h>
#include <ctype.h>

#define CHAR_LIMIT 80

// takes input from user, asks for caesar shift amount, then returns encrypted message
// assume message does not exceed 80 characters, upper/lower case remain the same, non-letters remain unchanged
int main(void) {
    char sentence[CHAR_LIMIT];
    int i = 0, j, shift, ch;

    printf("Enter message to be encrypted: ");
    while ((i < CHAR_LIMIT) && ((ch = getchar()) != '\n') && (ch != EOF)) {
        sentence[i] = ch;
        i++;
    }
    
    if (i == CHAR_LIMIT) { // if hit the max limit, extra is garbage
        while ((ch = getchar()) != '\n' && (ch != EOF)) {
        // clear input buffer
        }
    }

    printf("Enter Caesar shift amount (1-25): ");
    
    while (scanf("%d", &shift) != 1 || (shift < 1 || shift > 25)) {
        printf("Caesar shift amount must be numerical and (1-25): ");
        while ((ch = getchar()) != '\n' && (ch != EOF)) {
        // clear input buffer
        }
    }

    for (j = 0; j < i; j++) {
        if (islower(sentence[j])) {
            sentence[j] = ((sentence[j] - 'a') + shift) % 26 + 'a';

        } else if (isupper(sentence[j])) {
            sentence[j] = ((sentence[j] - 'A') + shift) % 26 + 'A';

        }
    }

    printf("Encrypted message: ");
    for (j = 0; j < i; j++) {
        printf("%c", sentence[j]);
    }
    
    return 0;
}