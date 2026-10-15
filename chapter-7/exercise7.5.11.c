#include <stdio.h>
#include <ctype.h>

// asks user for first and last name, displays last name, comma, space, first initial, period
// assume input is valid, but may contain extra spaces before the first name,
// between first and last name, and after the last name
int main(void) {
    int ch, first_initial;

    printf("Enter a first and last name: ");

    while ((ch = getchar()) == ' ') { // skips leading spaces
    }
    first_initial = toupper(ch);

    while ((ch = getchar()) != ' ' && ch != '\n' && ch != EOF) { // skips rest of first name
    }
    while (ch == ' ') { // skips spaces between names
        ch = getchar();
    }

    // prints last name; stops at trailing spaces or end of line
    while (ch != ' ' && ch != '\n' && ch != EOF) {
        putchar(ch);
        ch = getchar();
    }

    printf(", %c.\n", first_initial);
    return 0;
}
