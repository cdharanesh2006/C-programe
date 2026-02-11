#include <stdio.h>

int main() {
    int N, sum = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= i; j++) {
            sum = sum + j;
        }
    }

    printf("%d", sum);

    return 0;
}
