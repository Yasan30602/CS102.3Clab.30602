#include <stdio.h>

int main() {
    char letter;

    printf("Enter a letter: ");
    scanf(" %c", &letter);

    if (letter >= 'a' && letter <= 'z') {
        letter = letter - 'a' + 'A';
    }

    switch (letter) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", letter);
            break;
        default:
            printf("%c is not a vowel.\n", letter);
            break;
    }

    return 0;
}

