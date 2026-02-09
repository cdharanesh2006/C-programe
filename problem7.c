#include <stdio.h>

int main() {
    int capacity, n;
    int change;
    int occupied = 0;
    int criticalHours = 0;
    int i = 0;

    scanf("%d", &capacity);
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &change);

        occupied = occupied + change;

        if (occupied > (capacity * 90) / 100) {
            criticalHours++;
        }

        i++;
    }

    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalHours);

    return 0;
}
