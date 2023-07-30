#include <stdio.h>

int main() {
    char uppercaseLetters[] = "ABC";
    char lowercaseLetters[] = "abc";
    char digits[] = "012";
    char specialSymbols[] = "$*+/";
    char blankChar = ' ';

    printf("Integer Equivalents:\n");

    printf("Uppercase Letters:\n");
    for (int i = 0; uppercaseLetters[i] != '\0'; i++) {
        printf("%c: %d\n", uppercaseLetters[i], uppercaseLetters[i]);
    }

    printf("\nLowercase Letters:\n");
    for (int i = 0; lowercaseLetters[i] != '\0'; i++) {
        printf("%c: %d\n", lowercaseLetters[i], lowercaseLetters[i]);
    }

    printf("\nDigits:\n");
    for (int i = 0; digits[i] != '\0'; i++) {
        printf("%c: %d\n", digits[i], digits[i]);
    }

    printf("\nSpecial Symbols:\n");
    for (int i = 0; specialSymbols[i] != '\0'; i++) {
        printf("%c: %d\n", specialSymbols[i], specialSymbols[i]);
    }

    printf("\nBlank Character:\n");
    printf("'%c': %d\n", blankChar, blankChar);

    return 0;
}

