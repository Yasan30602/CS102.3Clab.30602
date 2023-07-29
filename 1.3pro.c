#include <stdio.h>

int main() {
    int intValue;
    float floatValue;
    double doubleValue;
    char charValue;

    printf("Enter an integer: ");
    scanf("%d", &intValue);

    printf("Enter a float: ");
    scanf("%f", &floatValue);

    printf("Enter a double: ");
    scanf("%lf", &doubleValue);

    printf("Enter a character: ");
    scanf(" %c", &charValue);

    printf("Values entered:\n");
    printf("Integer: %d\n", intValue);
    printf("Float: %f\n", floatValue);
    printf("Double: %lf\n", doubleValue);
    printf("Character: %c\n", charValue);

    return 0;
}

