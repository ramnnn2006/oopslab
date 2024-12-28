#include<stdio.h>

int main() {
    int temp, hotDays=0, pleasantDays=0, coldDays=0;
    while (1) {
        scanf("%d", &temp);
        if (temp == -1) break;
        if (temp >= 85) {
            hotDays++;
            printf("Temperature: %d -> Hot\n", temp);
        } else if (temp >= 60) {
            pleasantDays++;
            printf("Temperature: %d -> Pleasant\n", temp);
        } else {
            coldDays++;
            printf("Temperature: %d -> Cold\n", temp);
        }
    }

    printf("Hot days: %d\n", hotDays);
    printf("Pleasant days: %d\n", pleasantDays);
    printf("Cold days: %d\n", coldDays);
    return 0;
}