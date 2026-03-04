#include <stdio.h>

int main() {
    int n, i, j, isDuplicate;

    scanf("%d", &n);

    int ids[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &ids[i]);
    }

    for (i = 0; i < n; i++) {
        isDuplicate = 0;

        for (j = 0; j < i; j++) {
            if (ids[i] == ids[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            printf("%d ", ids[i]);
        }
    }

    return 0;
}