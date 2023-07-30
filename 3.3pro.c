#include <stdio.h>

int main()
{
    char name[50];
    double basicSalary, newSalary, increment;

    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter basic salary: ");
    scanf("%lf", &basicSalary);

    if (basicSalary < 5000) {
        increment = 0.05 * basicSalary;
    } else if (basicSalary >= 5000 && basicSalary < 10000) {
        increment = 0.10 * basicSalary;
    } else {
        increment = 0.15 * basicSalary;
    }

    newSalary = basicSalary + increment;

    printf("\nEmployee Name: %s\n", name);
    printf("New Salary: %.2lf\n", newSalary);

    return 0;
}
