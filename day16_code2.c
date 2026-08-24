// Question 32
// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main()
{
    int n, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        printf("It is a Palindrome number");
    else
        printf("It is a not a palindrome number");

    return 0;
}