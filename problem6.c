#include <stdio.h>

int main() {
    int maxWeight, n;
    int weight;
    int i = 0;
    int totalWeight = 0;
    int passengersAllowed = 0;
    int overload = 0;

    scanf("%d", &maxWeight);
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &weight);

        if (totalWeight + weight > maxWeight) {
            overload = 1;
            break;
        }

        totalWeight += weight;
        passengersAllowed++;
        i++;
    }

    printf("Passengers Allowed: %d\n", passengersAllowed);

    if (overload == 1) {
        printf("Overload: Yes\n");
    } else {
        printf("Overload: No\n");
    }

    return 0;
}
