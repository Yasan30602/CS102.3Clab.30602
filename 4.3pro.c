#include <stdio.h>

#define PI 3.14159

int main() {
    int choice;
    double radius;

    printf("Menu:\n");
    printf("1. Calculate the circumference of a circle\n");
    printf("2. Calculate the area of a circle\n");
    printf("3. Calculate the volume of a sphere\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            printf("Circumference of the circle: %.2lf\n", 2 * PI * radius);
            break;
        case 2:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            printf("Area of the circle: %.2lf\n", PI * radius * radius);
            break;
        case 3:
            printf("Enter the radius of the sphere: ");
            scanf("%lf", &radius);
            printf("Volume of the sphere: %.2lf\n", (4.0 / 3.0) * PI * radius * radius * radius);
            break;
        default:
            printf("Invalid choice. Please select 1, 2, or 3.\n");
            break;
    }

    return 0;
}

