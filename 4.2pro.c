#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Display the menu and get the operator choice from the user
    printf("Menu:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Division (/)\n");
    printf("4. Multiplication (*)\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf(" %c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '1':
            result = num1 + num2;
            break;
        case '2':
            result = num1 - num2;
            break;
        case '3':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Cannot divide by zero.\n");
                return 1;
            }
            break;
        case '4':
            result = num1 * num2;
            break;
        default:
            printf("Error: Invalid operator choice.\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}
