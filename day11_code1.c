// Question 21
// Write a program to display the month name and number of days using switch-case for a given month number.


#include <stdio.h>

int main(){
    int n;

    printf("Enter the no. of month :");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("January has 31 Days");
        break;

        case 2:
        printf("February has 28 normally and 29 days in leap  year");
        break;

        case 3:
        printf("March has 31 Days");
        break;

        case 4:
        printf("April has 30 Days");
        break;

        case 5:
        printf("May has 31 Days");
        break;

        case 6:
        printf("June has 30 Days");
        break;

        case 7:
        printf("July has 31 Days");
        break;

        case 8:
        printf("August has 31 Days");
        break;

        case 9:
        printf("September has 30 Days");
        break;

        case 10:
        printf("October has 31 Days");
        break;

        case 11:
        printf("November has 30 Days");
        break;

        case 12:
        printf("December has 31 Days");
        break;
    
    default:
        printf("Nothing Matched"); 
    }
    return 0;
}