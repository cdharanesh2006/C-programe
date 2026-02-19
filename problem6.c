#include <stdio.h>

int main() {
    int n, i;
    int fare, total = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &fare);
        total += fare;
    }

    printf("Total Collection: ₹%d", total);

    return 0;
}