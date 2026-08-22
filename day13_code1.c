// Question 25
// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float a, b;
    printf("Enter the Operator Number:");
    scanf("%d", &n);

    printf("Enter the numbers :");
    scanf("%f%f", &a, &b);

    switch (n)
    {
    case 1:
        printf("The Addition of two numbers are %.2f", a + b);
        break;

    case 2:
        printf("The Subraction of two numbers are %.2f", a - b);
        break;

    case 3:
        printf("The Multiplication of two numbers are %.2f", a * b);
        break;

    case 4:
        printf("The Division of two numbers are %.2f", a / b);
        break;

    case 5:
        printf("The Modulus of two numbers are %d", (int)a%(int)b);
        break;

    case 6:
        printf("The power of two numbers are %.2f", pow(a, b));
        break;
        
    default:
        printf("Nothing Matched");
        break;
    }
    return 0;
}