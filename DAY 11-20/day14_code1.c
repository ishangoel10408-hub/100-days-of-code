// Question 27
//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 2)
        sum = i + sum;

    printf("Sum = %d", sum);
    return 0;
}