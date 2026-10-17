
#include <stdio.h>

int main() {
    int n, a[100], k, i, j, temp;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    if (k >= 1 && k <= n)
        printf("%d", a[k - 1]);
    else
        printf("-1");

    return 0;
}
