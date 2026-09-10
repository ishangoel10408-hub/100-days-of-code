// Question 64
// Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int a[6] = {1, 2, 3, 2, 2, 4};
    int count[10] = {0};
    int max = 0, ans;

    for(int i = 0; i < 6; i++)
        count[a[i]]++;

    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            ans = i;
        }
    }

    printf("%d", ans);

    return 0;
}