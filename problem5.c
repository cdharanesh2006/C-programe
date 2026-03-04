#include <stdio.h>

int main() {
    int n, i;
    int expectedSum, actualSum = 0;

    scanf("%d", &n);

    int roll[n - 1];

    for (i = 0; i < n - 1; i++) {
        scanf("%d", &roll[i]);
        actualSum += roll[i];
    }

    expectedSum = n * (n + 1) / 2;

    printf("%d", expectedSum - actualSum);

    return 0;
}