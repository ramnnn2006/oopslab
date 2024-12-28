#include<stdio.h>
int main(){
    char t;
    int u;
    float b=0;
    printf("Input format: Type of EB [ D / C ] <space>  units_consumed\n");    
    scanf(" %c%d",&t,&u);
    if(t=='D'){
        b=u>500?b+(u-500)*6,u=500:b,b+=u>200?(u-200)*4,u=200:b,b+=u>100?(u-100)*2.5,u=100:b,b+=u;}
    else if(t=='C'){
        b=u>500?b+(u-500)*7,u=500:b,b+=u>200?(u-200)*6,u=200:b,b+=u>100?(u-100)*4.5,u=100:b,b+=u*2;}
    else{
        printf("Invalid type of EB connection. Please enter either D or C.");
        return 0;}
    
    printf("Electricity Bill Amount: Rs. %.2f",b);
    return 0;
}
