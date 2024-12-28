#include <stdio.h>

int main() {
    int A, B, C, R;
    scanf("%d%d%d", &A, &B, &C);
    R = A - (B / 2 + B % 2) * C;
    printf("%d", R);
    return 0;
}

