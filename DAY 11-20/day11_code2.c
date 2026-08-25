// Question 22
// Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>

int main()
{
   float a, b, cp, sp, profit, loss;

    printf("Enter the Cost Price and Selling Price: ");
    scanf("%f%f", &cp, &sp);

    profit = sp - cp;
    loss = cp - sp;

    a = (profit * 100.0) /cp;
    b = (loss * 100.0) /cp;

    if (sp > cp)
    {
        printf("The product made a profit of %.2f%%\n", a);
    }

    else if (sp < cp)
    {
        printf("The product made a loss of %.2f%%\n ", b);
    }

    else
    {
        printf("Neither loss nor profit");
    }
    return 0;
}