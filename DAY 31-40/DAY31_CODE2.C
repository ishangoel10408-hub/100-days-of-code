// Q62 Reverse an array without taking extra space.

#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int temp;

    for(int i = 0; i < 2; i++) {
        temp = a[i];
        a[i] = a[4-i];
        a[4-i] = temp;
    }

    for(int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}