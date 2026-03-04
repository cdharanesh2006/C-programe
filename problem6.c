#include <stdio.h>
#include <limits.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];
    int minSum = INT_MAX, maxSum = INT_MIN;

    for (int i = 0; i < R; i++) {
        int sum = 0;
        for (int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
        if (sum < minSum) minSum = sum;
        if (sum > maxSum) maxSum = sum;
    }

    printf("%d", maxSum - minSum);
    return 0;
}