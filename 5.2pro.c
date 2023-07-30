#include <stdio.h>

int main() {
    int marks[10];
    int total = 0;

    printf("Enter 10 marks:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    double average = (double)total / 10.0;

    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    if (average < 50) {
        printf("Fail!\n");
    } else {
        printf("Pass!\n");
    }

    return 0;
}

