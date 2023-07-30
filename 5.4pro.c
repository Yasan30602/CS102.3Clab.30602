#include <stdio.h>

int main() {
    int number, sum = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    int temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    // Display the sum of digits
    printf("Sum of digits of %d is: %d\n", number, sum);

    return 0;
}



