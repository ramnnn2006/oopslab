/*Algorithm:
Input: A non-negative integer n.
Output: Count of zeros in the number.*/

/*Flowchart:
Start
Input n (integer)
Set count to 0
Convert n to its absolute value
While n is not 0:
If the last digit of n is 0, increment count
Remove the last digit (n /= 10)
Output count
End*/

//code ig..
#include<stdio.h>
int main(){
    int n, count = 0;
    scanf("%d", &n);
    n = abs(n);
    while (n > 0) {
        if (n % 10 == 0) {
            count++;
        }
        n /= 10;
    }
    printf("%d", count);
    return 0;
}