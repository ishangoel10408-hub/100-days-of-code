 #include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
       ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("This Character is a Vowel");
    }
    else
    {
        printf("This Character is a Consonant");
    }

    return 0;
}