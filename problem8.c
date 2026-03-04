#include <stdio.h>

int main() {
    int n, k, i;

    scanf("%d", &n);

    int shifts[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &shifts[i]);
    }

    scanf("%d", &k);

    for (i = k; i < n; i++) {
        printf("%d ", shifts[i]);
    }
    for (i = 0; i < k; i++) {
        printf("%d ", shifts[i]);
    }

    return 0;
}