#include <stdio.h>

int main() {
    int N, sum = 0;

    scanf("%d", &N);

    for (int i = 2; i <= N; i += 2) {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}
