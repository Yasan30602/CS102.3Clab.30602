#include <stdio.h>

float fahrenheitToCelsius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {
    float fahrenheit;

    printf("Enter the temperature in degrees Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = fahrenheitToCelsius(fahrenheit);

    printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", fahrenheit, celsius);

    return 0;
}

