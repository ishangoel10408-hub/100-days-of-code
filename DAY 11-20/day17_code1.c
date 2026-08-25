// Question 33
// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, digit, digits = 0;
    int sum = 0;
printf("Enter the Number :");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == n)
        printf("It is a Armstrong Number");
    else
        printf("It is a not an Armstrong Number");

    return 0;
}