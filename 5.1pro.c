#include <stdio.h>

int main() {
    int number = 0;

    while (number <= 100) {
        printf("%d ", number);
        number++;
    }

    return 0;
}

#include <stdio.h>

int main() {
    int number = 0;

    do {
        printf("%d ", number);
        number++;
    } while (number <= 100);

    return 0;
}

#include <stdio.h>

int main() {
    for (int number = 0; number <= 100; number++) {
        printf("%d ", number);
    }

    return 0;
}

