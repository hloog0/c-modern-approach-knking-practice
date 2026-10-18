#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 30

// B1FF filter that reads a message entered by the user and translates it into B1FF-speak
// A->4, B->8, E->3, I->1, O->0, S->5, all to uppercase
int main(void) {
    char sentence[MAX_LENGTH];
    int sentence_len, i = 0;
    int ch;

    printf("Enter message: ");

    while ((i < MAX_LENGTH) && ((ch = getchar()) != '\n') && (ch != EOF)) {
        sentence[i] = toupper(ch);
        i++;
    }

    sentence_len = i;

    // translate biff-valid letters to biff
    for (i = 0; i < sentence_len; i++) {
        switch (sentence[i]) {
            case 'A':
                printf("4"); break;
            case 'B': 
                printf("8"); break;
            case 'E':
                printf("3"); break;
            case 'I':
                printf("1"); break;
            case 'O':
                printf("0"); break;
            case 'S': 
                printf("5"); break;
            default:
                printf("%c", sentence[i]); break;
        }
    }
    printf("!!!!!!!!!!!\n");

    return 0;
}