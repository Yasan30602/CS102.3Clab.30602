#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, numDigits, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    numDigits = (int)log10(number) + 1;

    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    if (originalNumber == sum) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}

