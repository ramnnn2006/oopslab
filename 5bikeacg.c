#include<stdio.h>

int main() {
    int distance;
    float fuel;
    scanf("%d %f", &distance, &fuel);

    float consumption = distance / fuel;
    printf("Average consumption (km/lt) %.3f", consumption);

    return 0;
}
