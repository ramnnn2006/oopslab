#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("Collatz sequence: ");
    while (num != 1) {
        printf("%d -> ", num);
        if (num % 2 == 0) { num /= 2; } 
        else { num = 3 * num + 1;}}
    printf("1");
    return 0; }
