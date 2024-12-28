#include<stdio.h>

int main() {
    int amount;
    scanf("%d", &amount);
    printf("There are:\n");
    int notes[7] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7; i++) {
        int count = amount / notes[i];
        amount %= notes[i];
        printf("%d Note(s) of %d.00\n", count, notes[i]);
    }

    return 0;
}
