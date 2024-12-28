#include<stdio.h>
#include<math.h>

int main() {
    float x1, y1, r1, x2, y2, r2;
    scanf("%f %f %f %f %f %f", &x1, &y1, &r1, &x2, &y2, &r2);
    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (d + r2 <= r1) {printf("Circle O1 contains Circle O2.");} 
    else if (d + r1 <= r2) {printf("Circle O2 contains Circle O1.");} 
    else {printf("Circles are overlapping.");}
    return 0;
}