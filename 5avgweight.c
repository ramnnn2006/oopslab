#include<stdio.h>

int main() {
    float weight1, num1, weight2, num2;
    scanf("%f %f %f %f", &weight1, &num1, &weight2, &num2);

    float averageValue = ((weight1 * num1) + (weight2 * num2)) / (num1 + num2);
    printf("Average Value = %.6f", averageValue);

    return 0;
}
