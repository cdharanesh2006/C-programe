#include <stdio.h>

int main() {
    int fuel, n;
    int consumption;
    int i = 0;
    int trips = 0;

    scanf("%d", &fuel);
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &consumption);

        if (fuel < consumption) {
            break;   // not enough fuel for next trip
        }

        fuel = fuel - consumption;
        trips++;

        i++;
    }

    printf("Completed Trips: %d\n", trips);
    printf("Remaining Fuel: %d\n", fuel);

    return 0;
}

