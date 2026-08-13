// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include<math.h>

int main()
{
    float p, r, t, s, a, ci;
    printf("ENTER PRINCPAL: ");
    scanf("%f", &p);

    printf("ENTER RATE OF INTEREST: ");
    scanf("%f", &r);

    printf("ENTER TIME: ");
    scanf("%f", &t);

    s = ((p * r * t) / 100);
    printf("THE SIMPLE INTERST IS : %.2f\n", s);

    a = p * pow((1 + r / 100), t);
    ci = a - p;

    printf("The Compound Interst is: %.2f\n", ci);

    return 0;
}