// Q85 (Strings)
// Reverse a string.

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j, length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[length] != '\0')
    {
        length++;
    }

    for (j = length - 1; j >= 0; j--)
    {
        printf("%c", str[j]);
    }

    return 0;
}