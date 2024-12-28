#include<stdio.h>
int main() {
    int length, width;
    scanf("%d %d", &length, &width);
    int perimeter = 2 * (length + width);
    int area = length * width;
    printf("Required length is %dm\n", perimeter);
    printf("Required quantity of carpet is %dsqm", area);
    return 0;
}