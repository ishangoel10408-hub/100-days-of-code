//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the Length of Rectangle:");
    scanf("%d", &a);

    printf("Enter the Breadth of Rectangle:");
    scanf("%d", &b);

    printf("The Perimeter of Rectangle is %d\n", 2*(a+b));
    printf("The Area of Rectangle is %d", a*b);
    return 0;
}