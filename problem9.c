#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int perf[n], leaders[n];
    int leaderCount = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &perf[i]);
    }

    int maxFromRight = perf[n - 1];
    leaders[leaderCount++] = maxFromRight;

    for (i = n - 2; i >= 0; i--) {
        if (perf[i] >= maxFromRight) {
            maxFromRight = perf[i];
            leaders[leaderCount++] = perf[i];
        }
    }

    for (i = leaderCount - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}