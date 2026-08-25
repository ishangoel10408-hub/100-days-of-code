// Question 24
// Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit

#include <stdio.h>

int main()
{
    int units;

    printf("Enter the number of units :");
    scanf("%d", &units);

    if (units <= 100)
    {
        printf("The monthly bill is Rs %d", units * 5);
    }

    else if (units >= 101 && units <= 200)
    {
        printf("The monthly bill is Rs %d", units * 7);
    }

    else if (units >= 201 && units <= 300)
    {
        printf("The monthly bill is Rs %d", units * 10);
    }

    else if (units > 300)
    {
        printf("The monthly bill is Rs %d", units * 12);
    }
    return 0;
}