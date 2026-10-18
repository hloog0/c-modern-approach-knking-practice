#include <stdio.h>

//asks user for a positive two digit number, then prints the english word for the number
int main(void) {
    int num, num_tens, num_ones;

    printf("Enter a positive two-digit number: ");
    scanf("%d", &num);
    
    if (num < 10 || num > 99) {
        printf("Error: Number must be between 10 and 99");
        return 1;
    }

    printf("You entered the number ");

    // if number is between 11 and 19
    switch (num) {
        case 11: printf("Eleven"); return 0;
        case 12: printf("Twelve"); return 0;
        case 13: printf("Thirteen"); return 0;
        case 14: printf("Fourteen"); return 0;
        case 15: printf("Fifteen"); return 0;
        case 16: printf("Sixteen"); return 0;
        case 17: printf("Seventeen"); return 0;
        case 18: printf("Eighteen"); return 0;
        case 19: printf("Nineteen"); return 0;
    }

    num_tens = num / 10;
    num_ones = num % 10;

    switch (num_tens) {
        case 1: printf("Ten"); return 0; //skip ones place check (already covered above)
        case 2: printf("Twenty"); break;
        case 3: printf("Thirty"); break;
        case 4: printf("Forty"); break;
        case 5: printf("Fifty"); break;
        case 6: printf("Sixty"); break;
        case 7: printf("Seventy"); break;
        case 8: printf("Eighty"); break;
        case 9: printf("Ninety"); break;
    }

    switch (num_ones) {
        case 1: printf("-one"); break;
        case 2: printf("-two"); break;
        case 3: printf("-three"); break;
        case 4: printf("-four"); break;
        case 5: printf("-five"); break;
        case 6: printf("-six"); break;
        case 7: printf("-seven"); break;
        case 8: printf("-eight"); break;
        case 9: printf("-nine"); break;
    }

    return 0;
}