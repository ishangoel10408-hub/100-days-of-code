// Write a program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345

#include<stdio.h>

int main()
{
    int rows = 5;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            printf("%d",  j   );
        }
        printf("\n");
    }

    return 0;
}