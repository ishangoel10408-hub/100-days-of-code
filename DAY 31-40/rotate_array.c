// Question 70
// Rotate an array to the right by k positions.

#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int k, i;

    printf("Enter k: ");
    scanf("%d", &k);

    for(i = 0; i < 5; i++)
        printf("%d ", a[(i - k + 5) % 5]);

    return 0;
}