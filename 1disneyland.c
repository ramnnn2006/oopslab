#include <stdio.h>

int sum() {
    int n;
    scanf("%d", &n);
    if (n == -999) {return 0;}
    return n + sum();}

int main() {
    int total = sum();
    printf("The credit points is %d\n", total);
    return 0;}

    
