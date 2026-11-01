// Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>

int main()
{
    FILE *fp;
    char str[200];

    fp = fopen("info.txt", "r");

    if(fp == NULL)
    {
        printf("File not found.");
        return 0;
    }

    while(fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}