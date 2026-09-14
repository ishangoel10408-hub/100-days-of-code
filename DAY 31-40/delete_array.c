// Question 68
// Delete an element from an array.

#include <stdio.h>

int main() {
    int a[10] = {54, 34, 45 ,89 , 18};
    int n = 5, pos = 4, i;

    for(i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}