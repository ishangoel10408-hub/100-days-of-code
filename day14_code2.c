// Question 28
//Write a program to print the sum of the first n even numbers.


#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter the value of n :");
    scanf("%d", &n);

    for (i = 0; i <= n; i = i + 2)
        sum = sum + i;

    printf("sum = %d", sum);
    return 0;
}