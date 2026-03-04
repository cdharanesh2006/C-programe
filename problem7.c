#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &a[i][j]);

    int count = 0;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int minRow = 1, maxCol = 1;

            for (int k = 0; k < C; k++)
                if (a[i][j] > a[i][k]) minRow = 0;

            for (int k = 0; k < R; k++)
                if (a[i][j] < a[k][j]) maxCol = 0;

            if (minRow && maxCol) count++;
        }
    }

    printf("%d", count);
    return 0;
}