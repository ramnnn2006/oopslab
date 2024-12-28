#include<stdio.h>

int main(){
    int n,i,j,s=6,d=22;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {for(j=0;j<n-i;j++)printf("     ");
        for(j=1;j<=i;j++)
            {printf("%10.5d",s);
            s+=d;d+=16;}printf("\n");}
    return 0;}

