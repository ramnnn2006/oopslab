#include<stdio.h>
int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    if (M % N == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
