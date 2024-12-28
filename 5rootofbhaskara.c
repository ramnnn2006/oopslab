#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("No real roots.");
    } else {
        float root1 = (-b + sqrt(delta)) / (2 * a);
        float root2 = (-b - sqrt(delta)) / (2 * a);
        printf("Root1 = %.5f\n", root1);
        printf("Root2 = %.5f", root2);
    }
    return 0;
}
