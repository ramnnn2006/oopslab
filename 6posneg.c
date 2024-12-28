#include<stdio.h>

int main() {
    int num;
    int pos = 0, neg = 0;
    float sum = 0;
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        if (num > 0) { pos++;}
        else if (num < 0) {neg++;}
        sum += num;}
    float average = sum / (pos + neg);
    printf("Positive count: %d\n", pos);
    printf("Negative count: %d\n", neg);
    printf("Average: %.2f", average);
    return 0;}
