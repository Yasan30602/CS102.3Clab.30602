#include <stdio.h>

int main() {
    float distance, time;
    float speed;


    printf("Enter the distance traveled (in meters): ");
    scanf("%f", &distance);

    printf("Enter the time taken (in seconds): ");
    scanf("%f", &time);

    speed = distance / time;

    printf("Average speed: %.2f m/s\n", speed);

    return 0;
}

