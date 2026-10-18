
#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int m, n, i = 0, j = 0, k = 0;

    scanf("%d", &m);
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n);
    for (j = 0; j < n; j++)
        scanf("%d", &b[j]);

    i = 0;
    j = 0;

    while (i < m && j < n) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < m)
        c[k++] = a[i++];

    while (j < n)
        c[k++] = b[j++];

    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
