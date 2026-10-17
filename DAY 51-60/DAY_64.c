
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k, len, max = 0, repeat;

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len; i++) {
        repeat = 0;

        for (j = i; j < len; j++) {
            for (k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    repeat = 1;
                    break;
                }
            }

            if (repeat)
                break;

            if (j - i + 1 > max)
                max = j - i + 1;
        }
    }

    printf("%d", max);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k, len, max = 0, repeat;

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len; i++) {
        repeat = 0;

        for (j = i; j < len; j++) {
            for (k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    repeat = 1;
                    break;
                }
            }

            if (repeat)
                break;

            if (j - i + 1 > max)
                max = j - i + 1;
        }
    }

    printf("%d", max);
    return 0;
}
