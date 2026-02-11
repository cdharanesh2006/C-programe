#include <stdio.h>

int main() {
    int N, i = 1;
    scanf("%d", &N);

    while (i <= 10) {
        printf("%d", N * i);
        if (i < 10)
            printf(" ");
        i++;
    }

    return 0;
}
