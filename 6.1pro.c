#include <stdio.h>

int main() {
    int arr[10];
    int i;
    int sum = 0;
    int min, max;

    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];

        if (i == 0 || arr[i] < min) {
            min = arr[i];
        }

        if (i == 0 || arr[i] > max) {
            max = arr[i];
        }
    }

    double average = (double)sum / 10.0;

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2lf\n", average);

    printf("Values in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

