#include <stdio.h>

int main() {
    int number, reversedNumber = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    int temp = number;
    do {
        int digit = temp % 10;
        reversedNumber = reversedNumber * 10 + digit;
        temp /= 10;
    } while (temp != 0);

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}

