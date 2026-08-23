// Question 28
//Write a program to print the product of the first n even numbers.


#include <stdio.h>

int main()
{
    int i, n, product = 1;
    printf("Enter the value of n :");
    scanf("%d", &n);

    for (i = 2; i <= 2*n; i = i + 2)
        product = product * i;

    printf("PRODUCT = %d", product);
    return 0;
}