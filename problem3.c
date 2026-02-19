#include <stdio.h>

int main() {
    int n, i;
    int units, total = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &units);
        total += units;
    }

    printf("Total Units: %d", total);

    return 0;
}
