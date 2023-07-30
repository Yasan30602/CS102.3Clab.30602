
#include <stdio.h>

int main() {
    int num1 = 0, num2 = 1, nextNum, count = 2;

    printf("Fibonacci Sequence: %d %d ", num1, num2);

    while (count < 10) {
        nextNum = num1 + num2;
        printf("%d ", nextNum);
        num1 = num2;
        num2 = nextNum;
        count++;
    }

    printf("\n");

    return 0;
}
