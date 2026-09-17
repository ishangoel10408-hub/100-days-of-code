// Q77 (2D Arrays)
// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n, a[10][10], distinct = 1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i][i] == a[j][j])
                distinct = 0;

    if(distinct == 1)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}


