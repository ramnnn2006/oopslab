#include<stdio.h>
int main(){
    int n,a=1,b=2,c,i;
    scanf("%d",&n);
    if(n>30)printf("Invalid Input");
    else{
        for(i=3;i<=n;i++)
            {c=a+b;a=b;b=c;}
        printf("%d",n==1?1:(n==2?2:b));
        }
    return 0;
}
