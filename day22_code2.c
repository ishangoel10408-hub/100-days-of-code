// Question 44
// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 +... up to n terms.

#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Enter the number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            sum = sum + 1;
        else
            sum = sum + (float)(2 * i - 1) / (2 * i - 2);
    }

    printf("%.2f", sum);

    return 0;
}