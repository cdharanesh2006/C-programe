#include <stdio.h>

int main() {
    int n;
    int vibration;
    int i = 0;

    int unsafeCount = 0;
    int consecutiveUnsafe = 0;
    int breakdownAt = -1;

    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &vibration);

        if (vibration > 70) {
            unsafeCount++;
            consecutiveUnsafe++;

            if (consecutiveUnsafe == 3 && breakdownAt == -1) {
                breakdownAt = i + 1;
            }
        } else {
            consecutiveUnsafe = 0;
        }

        i++;
    }

    if (breakdownAt == -1) {
        printf("Breakdown At Reading: Not Occurred\n");
    } else {
        printf("Breakdown At Reading: %d\n", breakdownAt);
    }

    printf("Unsafe Readings: %d");

    return 0;
}
