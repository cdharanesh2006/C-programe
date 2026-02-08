#include <stdio.h>

int main() {
    int initialCash, n, i;
    int withdraw;
    int remainingCash, riskCount = 0;

    scanf("%d", &initialCash);

    scanf("%d", &n);

    remainingCash = initialCash;

    for(i = 0; i < n; i++) {
        scanf("%d", &withdraw);
        remainingCash -= withdraw;

        if(remainingCash < 5000) {
            riskCount++;
        }
    }

    printf("Remaining Cash: %d\n", remainingCash);
    printf("Risk Count: %d", riskCount);

    return 0;
}