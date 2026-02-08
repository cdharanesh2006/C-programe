#include <stdio.h>

int main() {
    int n;
    int balance;
    int transaction;
    int i = 0;
    int lowBalanceDays = 0;

    scanf("%d", &n);
    scanf("%d", &balance);

    while (i < n) {
        scanf("%d", &transaction);

        balance = balance + transaction;

        if (balance < 2000) {
            lowBalanceDays++;
        }

        i++;
    }

    printf("Final Balance: %d\n", balance);
    printf("Low Balance Days: %d\n", lowBalanceDays);

    return 0;
}
