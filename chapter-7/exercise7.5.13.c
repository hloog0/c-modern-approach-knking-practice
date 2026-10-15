#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// calculates average word length of a sentence to one decimal place
// for simplicity, punctuation mark is part of the word it is attached to
int main(void) {
    bool in_word = false;
    int ch, word_count = 0, total_letters = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (in_word) {
            if (isalpha(ch) || ispunct(ch)) { // if character or punctuation, add to total letters
                total_letters += 1;
            } else {
                in_word = false;
            }
        } else {
            if (isalpha(ch) || ispunct(ch)) {
                total_letters += 1;
                word_count += 1;
                in_word = true;
            }
        }
    }

    if (word_count == 0) { // avoids dividing by zero on an empty sentence
        printf("No words entered.\n");
        return 0;
    }

    printf("Average word length: %.1f\n", (float)total_letters / word_count);
    return 0;
}
