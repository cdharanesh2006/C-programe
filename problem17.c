#include <stdio.h>

int main() {
    int n, i;
    int delay, totalDelay = 0, delayedCount = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &delay);
        totalDelay += delay;

        if(delay > 30) {
            delayedCount++;
        }
    }

    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Deliveries: %d", delayedCount);

    return 0;
}