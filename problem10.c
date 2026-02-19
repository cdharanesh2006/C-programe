#include <stdio.h>

int main() {
    int n, i;
    int data, totalData = 0, highUsageDays = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &data);
        totalData += data;

        if(data > 2) {
            highUsageDays++;
        }
    }

    printf("Total Data: %d\n", totalData);
    printf("High Usage Days: %d", highUsageDays);

    return 0;
}