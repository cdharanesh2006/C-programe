#include <stdio.h>

int main() {
    int n, i;
    int loss, totalLoss = 0, highLossDays = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &loss);
        totalLoss += loss;

        if(loss > 100) {
            highLossDays++;
        }
    }

    printf("Total Loss: %d\n", totalLoss);
    printf("High Loss Days: %d", highLossDays);

    return 0;
}