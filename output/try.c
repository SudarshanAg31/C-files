#include <stdio.h>

#define DAYS_IN_YEAR 365
#define DAYS_IN_MONTH 30
#define DAYS_IN_WEEK 7

void convertDays(int totalDays, int *years, int *months, int *weeks, int *days) {
    *years = totalDays / DAYS_IN_YEAR;
    totalDays = totalDays % DAYS_IN_YEAR;

    *months = totalDays / DAYS_IN_MONTH;
    totalDays = totalDays % DAYS_IN_MONTH;

    *weeks = totalDays / DAYS_IN_WEEK;
    *days = totalDays % DAYS_IN_WEEK;
}

int main() {
    int totalDays;
    int years, months, weeks, days;

    printf("Enter the number of days: ");
    scanf("%d", &totalDays);

    convertDays(totalDays, &years, &months, &weeks, &days);

    printf("%d days is equivalent to:\n", totalDays);
    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d weeks\n", weeks);
    printf("%d days\n", days);

    return 0;
}
