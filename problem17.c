#include <stdio.h>

int main() {
    int walletBalance, n;
    int purchase, success = 0;
    int i = 0;

    scanf("%d", &walletBalance);
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &purchase);

        if (walletBalance < purchase) {
            break;
        }

        walletBalance -= purchase;
        success++;
        i++;
    }

    printf("Successful Purchases: %d\n", success);
    printf("Final Balance: %d", walletBalance);

    return 0;
}
