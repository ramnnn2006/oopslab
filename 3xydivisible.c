#include<stdio.h>
int main(){
    int n, x, y; //numbers divisible by x but not by y till the range on n ? yeahh!
    scanf("%d %d %d", &n, &x, &y);
    for (int i = 1; i <= n; i++) {
        if (i % x == 0 && i % y != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
