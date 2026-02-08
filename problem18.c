#include <stdio.h>

int main() {
    int n, i;
    int hours, totalHours = 0, heavyDays = 0;
    int overtimeCost;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &hours);
        totalHours += hours;

        if(hours > 3) {
            heavyDays++;
        }
    }

    overtimeCost = totalHours * 200;

    printf("Total Overtime Hours: %d\n", totalHours);
    printf("Overtime Cost: %d\n", overtimeCost);
    printf("Heavy Overtime Days: %d", heavyDays);

    return 0;
}