#include<stdio.h>
int main(){
    int m=5,r[4][5],i,j,t,a;
    for(i=0;i<4;i++){
        printf("Player %d:\n",i+1);
        for(j=0;j<5;j++)scanf("%d",&r[i][j]);
    }
    for(i=0;i<4;i++){
        t=0;
        for(j=0;j<5;j++)t+=r[i][j];
        a=t/5.0;
        printf("Player %d - Total runs: %d, Batting Average: %.2f\n",i+1,t,a);
    }
    return 0;
} 