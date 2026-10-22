#include <stdio.h>

int main() {
    int n, a[100], i, j;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                printf("Repeated element = %d", a[i]);
                return 0;
            }
        }
    }

    return 0;
}