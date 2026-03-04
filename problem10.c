#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int prices[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int maxFromRight = prices[n - 1];
    prices[n - 1] = -1;

    for (i = n - 2; i >= 0; i--) {
        int temp = prices[i];
        prices[i] = maxFromRight;

        if (temp > maxFromRight) {
            maxFromRight = temp;
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", prices[i]);
    }

    return 0;
}