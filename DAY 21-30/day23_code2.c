// Q46: Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// *****

#include <stdio.h>

int main()
{
    int i, j, rows = 5;

    for (i = 0; i < rows; i++)
    {

        for (j = 0; j < rows; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
     return 0;
}