#include <stdio.h>

int main() {
    int n, i;
    int revenue, totalRevenue = 0, targetDays = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &revenue);
        totalRevenue += revenue;

        if(revenue > 50000) {
            targetDays++;
        }
    }

    printf("Total Revenue: %d\n", totalRevenue);
    printf("Target Days: %d", targetDays);

    return 0;
}