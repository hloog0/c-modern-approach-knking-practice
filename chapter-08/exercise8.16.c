#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// tests whether two words are anagrams
int main(void) {
    int letter_appearances[26] = {0};
    int ch, i;
    bool is_anagram = true;

    printf("Enter first word: ");
    while ((ch = tolower(getchar())) != '\n' && (ch != EOF)) {
        if (isalpha(ch)) {
                letter_appearances[ch - 'a'] += 1; // add letter appearance
        }
    }

    printf("Enter second word: ");
    while ((ch = tolower(getchar())) != '\n' && (ch != EOF)) {
        if (isalpha(ch)) {
                letter_appearances[ch - 'a'] -= 1; // subtract letter appearance
        }
    }

    // check if first and second word canceled letter appearance in array
    for (i = 0; i < 26; i++) {
        if(letter_appearances[i] != 0) {
            is_anagram = false;
            break;
        }
    }

    if(is_anagram) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }
    
    return 0;
}