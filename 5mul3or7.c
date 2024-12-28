#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num % 3 == 0 || num % 7 == 0) {printf("Multiple of 3 or 7");} 
    else {printf("Not a multiple of 3 or 7");}
    return 0;
}
