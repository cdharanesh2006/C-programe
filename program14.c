#include <stdio.h>

int main() {
    int atmCash, n;
    int withdrawal;
    int i = 0, success = 0;

    scanf("%d", &atmCash);
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &withdrawal);

        if (atmCash >= withdrawal) {
            atmCash -= withdrawal;
            success++;
        } else {
            break;
        }

        i++;
    }

    printf("Successful Withdrawals: %d\n", success);
    printf("Remaining Cash: %d\n", atmCash);

    return 0;
}
