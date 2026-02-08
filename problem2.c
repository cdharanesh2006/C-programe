#include <stdio.h>

int main() {
    int n, i;
    int amount, total = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &amount);
        total += amount;
    }

    if(total > 10000) {
        printf("Limit Exceeded");
    } else {
        printf("Approved");
    }

    return 0;
}
