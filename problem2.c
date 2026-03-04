#include <stdio.h>
#include <limits.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];
    int maxPos = INT_MIN, secondMaxPos = INT_MIN;
    int minNeg = INT_MAX, secondMinNeg = INT_MAX;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);

            if (a[i][j] > maxPos) {
                secondMaxPos = maxPos;
                maxPos = a[i][j];
            } else if (a[i][j] > secondMaxPos) {
                secondMaxPos = a[i][j];
            }

            if (a[i][j] < minNeg) {
                secondMinNeg = minNeg;
                minNeg = a[i][j];
            } else if (a[i][j] < secondMinNeg) {
                secondMinNeg = a[i][j];
            }
        }
    }

    int prod1 = maxPos * secondMaxPos;
    int prod2 = minNeg * secondMinNeg;

    printf("%d", prod1 > prod2 ? prod1 : prod2);
    return 0;
}