#include <stdio.h>

int main() {
    int n;
    int order;
    int i = 0;
    int success = 0;
    int cancelled = 0;

    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &order);

        if (order == 1) {
            success++;
        } else if (order == 0) {
            cancelled++;
        }

        i++;
    }

    printf("Successful: %d\n", success);
    printf("Cancelled: %d\n", cancelled);

    if (cancelled > success) {
        printf("Status: Risk\n");
    } else {
        printf("Status: Safe\n");
    }

    return 0;
}
