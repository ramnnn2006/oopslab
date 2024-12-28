#include <stdio.h>

int ISBN(char s[11]) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {sum += (i + 1) * (s[i] - '0');}
    return sum % 11 == 0;}

int main() {
    char isbn[11]; dscanf("%d", &isbn);
    printf(ISBN(isbn) ? "Valid\n" : "Invalid\n");
    return 0;}
