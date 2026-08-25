// Question 20
// Write a program to display the day of the week based on a number (1-7) using switch-case.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the day of the week :");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("The Day is Monday");
        break;

    case 2:
        printf("The Day is Tuesday");
        break;

    case 3:
        printf("The Day is Wednesday");
        break;

    case 4:
        printf("The Day is Thursday");
        break;

    case 5:
        printf("The Day is Friday");
        break;

    case 6:
        printf("The Day is Saturday");
        break;

    case 7:
        printf("The Day is Sunday");
        break;
    default:
        printf("Nothing matched");
        break;
    }
    return 0;
}