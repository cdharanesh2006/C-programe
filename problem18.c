#include <stdio.h>

int main() {
    int units;
    int bill;

    scanf("%d", &units);

    if (units > 0) {
        bill = units * 5;
        printf("Bill amount = Rs. %d", bill);
    } else {
        printf("Invalid input");
    }

    return 0;
}
