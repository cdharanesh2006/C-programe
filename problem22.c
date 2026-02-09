#include <stdio.h>

int main() {
    int n;
    int attempt;
    int i = 0;
    int totalFailures = 0;
    int consecutiveFailures = 0;
    int lockAt = -1;

    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &attempt);

        if (attempt == 0) {
            totalFailures++;
            consecutiveFailures++;

            if (consecutiveFailures == 3 && lockAt == -1) {
                lockAt = i + 1;
            }
        } else {
            consecutiveFailures = 0;
        }

        i++;
    }

    if (lockAt == -1) {
        printf("Lock Triggered At Attempt: Not Locked\n");
    } else {
        printf("Lock Triggered At Attempt: %d\n", lockAt);
    }

    printf("Total Failed Attempts: %d");

    return 0;
}
