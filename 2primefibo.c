#include<stdio.h>
int fib(int n){return n<=1?n:fib(n-1)+fib(n-2);}

int prime(int n){int i,c=0,p=2;while(c<n)  {int f=1;for(i=2;i*i<=p;i++)if(p%i==0){ f=0;break; }if(f) { c++;}if(c<n) { p++;} }return p; }

int main() { 
    int n,res;
    scanf("%d",&n);
    res=n%2?fib((n+1)/2):prime(n/2);
    printf("%d",res);
    return 0;}



