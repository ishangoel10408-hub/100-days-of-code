// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main()
{
    int n, first, last, temp, p = 1;
    printf("Enter the Number:");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        p = p * 10;
    }

    first = temp;
    n = n % p;
    n = n / 10;

    printf("%d", last * p + n * 10 + first);

    return 0;
}