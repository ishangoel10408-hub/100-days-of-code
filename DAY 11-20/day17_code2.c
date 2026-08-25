// Question 34
// Write a program to check if a number is prime.

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not a prime number");
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("Not a prime number");
                return 0;
            }
        }

        printf("Prime number");
    }

    return 0;
}