#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    while (num > 0) {
        if (num % 10 != 0 && num % 10 != 1) {   printf("Not a valid binary number.");       return 0;}  num /= 10;}
    printf("Valid binary number.");
    return 0;}
