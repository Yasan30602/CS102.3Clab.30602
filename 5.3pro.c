#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the factorial using a for loop
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    // Display the factorial
    printf("Factorial of %d is: %llu\n", number, factorial);

    return 0;
}


