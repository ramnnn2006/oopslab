#include<stdio.h>

int main() {
    int age;
    float sal;
    scanf("%d %f", &age, &sal);
    if (sal > 6000) sal = 6000;  
    float eyr, err;  

    if (age <= 55) {
        eyr = 20;  
        err = 17;  
    } else if (age <= 60) {
        eyr = 13;  
        err = 13;  
    } else if (age <= 65) {
        eyr = 7.5;  
        err = 9;   
    } else {
        eyr = 5;  
        err = 7.5; 
    }

    float eyc = (eyr / 100) * sal;  
    float erc = (err / 100) * sal;   

    printf("Employee Contribution: %.2f\n", eyc);
    printf("Employer Contribution: %.2f\n", erc);

    return 0;
}