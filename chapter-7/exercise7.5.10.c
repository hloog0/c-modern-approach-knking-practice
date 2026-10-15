#include <stdio.h>
#include <ctype.h>

// asks user for a sentence, counts how many vowels (a,e,i,o,u) are in the sentence
int main(void) {
    int ch;
    int vowel_count = 0;

    printf("Enter a sentence: ");
    while ((ch = tolower(getchar())) != '\n' && ch != EOF) {
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                vowel_count += 1; break;
            default:
                break;
        }
    }

    printf("Your sentence contains %d vowels.\n", vowel_count);
    return 0;
}
