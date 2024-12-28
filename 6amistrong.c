#include<stdio.h>
#include<math.h>

int main() {
    int num, og, sum = 0, di = 0;
    scanf("%d", &num);
    og = num;
    while (num > 0) {
        di++;
        num /= 10;}
    num = og;
    while (num > 0) {
        sum += pow(num % 10, di ) ;
        num /= 10; }
    printf("%d is %san Armstrong number.", og, sum == og ? "" : "not ");
    return 0;
}

