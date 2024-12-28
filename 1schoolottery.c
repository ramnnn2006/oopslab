#include <stdio.h>

int main() {
    int n, valid = 1, ft, l;
    scanf("%d", &n);
    ft = n;
    l = n % 10;
    if (l == 8) valid = 0;
    while (n > 0) {
        if (n % 10 % 2 != 0) valid = 0;
        n /= 10;
    }
    if (ft % 10 == 8) valid = 0;
    printf(valid ? "yes" : "no");
    return 0;
}