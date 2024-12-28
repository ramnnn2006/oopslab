#include<stdio.h>
int main() {
    int a, b, total = 0;
    scanf("%d %d", &a, &b);
    total += a;
    while (a >= b) {
        int newCandles = a / b;
        total += newCandles;
        a = newCandles + (a % b);
    }
    printf("%d", total);
    return 0;
}
