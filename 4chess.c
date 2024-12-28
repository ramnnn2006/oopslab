#include<stdio.h>
int main() {
    int m, sum = 0;
    scanf("%d", &m);
    for (int i = 1; i <= m; i++) {
        sum += i * i;
    }
    printf("%d", sum);
    return 0;
}
