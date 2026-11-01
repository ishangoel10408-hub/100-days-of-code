// Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("input.txt", "r");

    if(fp1 == NULL)
    {
        printf("Input file not found.");
        return 0;
    }

    fp2 = fopen("output.txt", "w");

    if(fp2 == NULL)
    {
        printf("Output file cannot be created.");
        fclose(fp1);
        return 0;
    }

    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(toupper(ch), fp2);
    }

    printf("Conversion completed successfully.");

    fclose(fp1);
    fclose(fp2);

    return 0;
}