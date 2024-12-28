#include<stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) printf("Quadrant-I(+,+)");
    else if (x < 0 && y > 0) printf("Quadrant-II(-,+)");
    else if (x < 0 && y < 0) printf("Quadrant-III(-,-)");
    else if (x > 0 && y < 0) printf("Quadrant-IV(+,-)");

    return 0;
}
