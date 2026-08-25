// Question 23
// Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.

#include <stdio.h>

int main()
{
    int days;

    printf("Enter the number of days :");
    scanf("%d", &days);

    if (days <= 5)
    {
        printf("The fine is Rs %d", days * 2);
    }

    else if (days >= 6 && days <= 10)
    {
        printf("The fine is Rs %d", days * 4);
    }

    else if (days >= 11 && days <= 30)
    {
        printf("The fine is Rs %d", days * 6);
    }

    else if (days > 30)
    {
        printf("Membership Cancelled");
    }
    return 0;
}