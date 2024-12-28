#include<stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int steps = (x + 4) / 5;  // Ceiling division
    printf("%d", steps);
    return 0;
}
