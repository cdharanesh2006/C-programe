#include <stdio.h>

int main() {
    int n;
    int amount;
    int i = 0;

    int highValueCount = 0;
    int consecutiveHigh = 0;
    int fraudAt = -1;

    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &amount);

        if (amount >= 50000) {
            highValueCount++;
            consecutiveHigh++;

            if (consecutiveHigh == 3 && fraudAt == -1) {
                fraudAt = i + 1;
            }
        } else {
            consecutiveHigh = 0;
        }

        i++;
    }

    if (fraudAt == -1) {
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    } else {
        printf("Fraud Triggered At Attempt: %d\n", fraudAt);
    }

    printf("High-Value Transactions: %d");

    return 0;
}
