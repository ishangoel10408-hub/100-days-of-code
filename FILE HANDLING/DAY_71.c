// Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    printf("Enter name: ");
    scanf("%49s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be created.");
        return 0;
    }

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("Data saved successfully.");

    return 0;
}