#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the numbers before swap
    printf("Before swap:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Swap the values
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the numbers after swap
    printf("\nAfter swap:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
