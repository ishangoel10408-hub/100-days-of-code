// Question 19
//  Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the Sides:");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
{
     printf("It is a Equilateral Triangle");
}
    else if(a==b || b==c || a==c )
    {
        printf("It is a Isosceles Triangle");
    }
    else 
    {
        printf("It is a Scalene Triangle");
    }
    return 0;
}
