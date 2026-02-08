#include <stdio.h>

int main() {
    int n, i;
    int errors, totalErrors = 0, criticalHours = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &errors);
        totalErrors += errors;

        if(errors > 50) {
            criticalHours++;
        }
    }

    printf("Total Errors: %d\n", totalErrors);
    printf("Critical Hours: %d", criticalHours);

    return 0;
}