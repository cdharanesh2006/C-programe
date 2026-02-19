#include <stdio.h>

int main() {
    int n, i;
    int rate, maxRate, dangerCount = 0;


    scanf("%d", &n);


    scanf("%d", &rate);
    maxRate = rate;

    if(rate > 140) {
        dangerCount++;
    }

    for(i = 1; i < n; i++) {
        scanf("%d", &rate);

        if(rate > maxRate) {
            maxRate = rate;
        }

        if(rate > 140) {
            dangerCount++;
        }
    }

    printf("Max Heart Rate: %d\n", maxRate);
    printf("Danger Readings: %d", dangerCount);

    return 0;
}