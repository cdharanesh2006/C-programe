#include <stdio.h>

int main() {
    int maxCapacity, n;
    int arriving;
    int treated = 0, rejected = 0;
    int i = 0;

    scanf("%d", &maxCapacity);
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &arriving);

        if (treated < maxCapacity) {
            if (treated + arriving <= maxCapacity) {
                treated += arriving;
            } else {
                rejected += (treated + arriving - maxCapacity);
                treated = maxCapacity;
            }
        } else {
            rejected += arriving;
        }

        i++;
    }

    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d");

    return 0;
}
