#include <stdio.h>

int main() {
    int n, i;
    int rain, total = 0, heavyDays = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &rain);
        total += rain;

        if(rain > 50) {
            heavyDays++;
        }
    }

    printf("Total Rainfall: %d\n", total);
    printf("Heavy Rain Days: %d", heavyDays);

    return 0;
}