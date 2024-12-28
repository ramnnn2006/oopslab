#include<stdio.h>

int main() {
    int totalDays;
    scanf("%d", &totalDays);

    int years = totalDays / 365;
    totalDays %= 365;

    int weeks = totalDays / 7;
    totalDays %= 7;

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", totalDays);

    return 0;
}
