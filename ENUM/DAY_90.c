//Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int choice;

    printf("Enter name: ");
    scanf("%49s", p.name);

    printf("Enter gender (0 for Male, 1 for Female): ");
    scanf("%d", &choice);

    p.gender = choice;

    printf("Name: %s\n", p.name);

    if (p.gender == MALE)
        printf("Gender: Male");
    else if (p.gender == FEMALE)
        printf("Gender: Female");
    else
        printf("Invalid Gender");

    return 0;
}