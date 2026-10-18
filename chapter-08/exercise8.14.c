#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define CHAR_LIMIT 50

// reverses the words (not letters) in a sentence, stops at the first [. ? !] (terminating) character
// assumes single spaces between words, no trailing whitespace, and sentence either ends with terminating character, alphanumeric, or hits limit
int main(void) {
    char sentence[CHAR_LIMIT];
    int i = 0, j, k, ch, print_begin, word_end;
    char terminator;
    bool last_char = false, terminator_ends;

    printf("Enter a sentence: ");

    // stops at CHAR_LIMIT - 1 index, stops early if EOF, '\n', or [. ! ?]
    while ((i < CHAR_LIMIT) && ((ch = getchar()) != '\n') && (ch != EOF) && (ch != '.') && (ch != '!') && (ch != '?')) {
        sentence[i] = ch;
        i++;
    }

    printf("Reversal of sentence: ");
    // determine if sentence ended with terminator
    if (ch == '.' || ch == '!' || ch == '?') {
        terminator = (char)ch;
        terminator_ends = true;
    } else {
        terminator_ends = false;
    }

    print_begin = i - 1;
    word_end = i - 1;
    
    // starts reverse from index of last character of last word
    while (print_begin >= 0 && !last_char) {
        for (j = print_begin; j >= 0; j--) {

            // hit the first character of last word
            if (j == 0) {
                print_begin = 0;
                last_char = true;
                break;
            }

            // start at last word last character, look for a space
            if (isblank(sentence[j])) {
                print_begin = j + 1;
                break;
            }
        }

        // print the word out
        for (k = print_begin; k <= word_end; k++) {
            printf("%c", sentence[k]);
        }

        // add a space if not last word
        if (print_begin > 0) {
            printf(" ");
        }

        // move beginning and end markers
        print_begin -= 2;
        word_end = print_begin;
    }

    if (terminator_ends) {
        printf("%c", terminator);
    }
    printf("\n");
    
    return 0;
}