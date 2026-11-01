// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char source[50], destination[50];
    int ch;

    printf("Enter source filename: ");
    scanf("%49s", source);

    printf("Enter destination filename: ");
    scanf("%49s", destination);

    fp1 = fopen(source, "r");

    if(fp1 == NULL)
    {
        printf("Source file not found.");
        return 0;
    }

    fp2 = fopen(destination, "w");

    if(fp2 == NULL)
    {
        printf("Destination file cannot be created.");
        fclose(fp1);
        return 0;
    }

    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("File copied successfully.");

    fclose(fp1);
    fclose(fp2);

    return 0;
}