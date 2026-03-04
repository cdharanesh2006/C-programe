#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];
    long long maxProduct = -1e18;
    int index = 0;

    for (int i = 0; i < R; i++) {
        long long product = 1;
        for (int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
            product *= a[i][j];
        }
        if (product > maxProduct) {
            maxProduct = product;
            index = i;
        }
    }

    printf("%d", index);
    return 0;
}