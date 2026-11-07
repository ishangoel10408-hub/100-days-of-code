// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum Role
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    enum Role role;

    printf("Enter role (1-ADMIN, 2-USER, 3-GUEST): ");
    scanf("%d", &role);

    switch (role)
    {
        case ADMIN:
            printf("Welcome Admin! Full access granted.");
            break;

        case USER:
            printf("Welcome User! Limited access granted.");
            break;

        case GUEST:
            printf("Welcome Guest! Read-only access granted.");
            break;

        default:
            printf("Invalid role.");
    }

    return 0;
}