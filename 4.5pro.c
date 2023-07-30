#include <stdio.h>

int main() {
    int month,days;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            days = 30;
            break;
        case 2: // February
            days = 28;
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            return 1;
    }

    printf("Total number of days in month %d: %d\n", month, days);

    return 0;
}

