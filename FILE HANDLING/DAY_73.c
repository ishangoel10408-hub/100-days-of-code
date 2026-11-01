// Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inword = 0, last = '\n';

    fp = fopen("info.txt", "r");

    if(fp == NULL)
    {
        printf("File not found.");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == '\n')
            lines++;

        if(ch == ' ' || ch == '\n' || ch == '\t')
            inword = 0;
        else if(inword == 0)
        {
            words++;
            inword = 1;
        }

        last = ch;
    }

    if(characters > 0 && last != '\n')
        lines++;

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);

    fclose(fp);

    return 0;
}