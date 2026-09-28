// Question 98
//Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char str[100];
    int i, lastSpace = 0;

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    printf("Result: ");

    for (i = 0; i < lastSpace; i++) {
        if (i == 0 || str[i - 1] == ' ')
            printf("%c ", str[i]);
    }

    for (i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++)
        printf("%c", str[i]);

    return 0;
}