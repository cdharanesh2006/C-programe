#include <stdio.h>

int main() {
    int n, i;
    int risk, totalRisk = 0, highRiskCount = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &risk);
        totalRisk += risk;

        if(risk > 50) {
            highRiskCount++;
        }
    }

    printf("Total Risk: %d\n", totalRisk);
    printf("High Risk Sessions: %d", highRiskCount);

    return 0;
}