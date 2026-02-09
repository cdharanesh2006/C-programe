#include <stdio.h>

int main() {
    int n;
    int prev, curr;
    int i = 1;
    int totalDrops = 0;
    int consecutiveDrops = 0;
    int crashDay = -1;

    scanf("%d", &n);

    scanf("%d", &prev);   // first day index

    while (i < n) {
        scanf("%d", &curr);

        if (curr < prev) {
            totalDrops++;
            consecutiveDrops++;

            if (consecutiveDrops == 3 && crashDay == -1) {
                crashDay = i + 1;
            }
        } else {
            consecutiveDrops = 0;
        }

        prev = curr;
        i++;
    }

    if (crashDay == -1) {
        printf("Crash Day: Not Detected\n");
    } else {
        printf("Crash Day: %d\n", crashDay);
    }

    printf("Total Drops: %d");

    return 0;
}
