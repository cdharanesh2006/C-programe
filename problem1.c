#include <stdio.h>
#include <limits.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int salary[R][C];
    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &salary[i][j]);

            if (salary[i][j] > max1) {
                if (salary[i][j] != max1) {
                    max2 = max1;
                    max1 = salary[i][j];
                }
            } else if (salary[i][j] > max2 && salary[i][j] != max1) {
                max2 = salary[i][j];
            }
        }
    }

    printf("%d", max2);
    return 0;
}