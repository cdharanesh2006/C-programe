#include <stdio.h>

int main() {
    int fuel, n;
    int burn;
    int i = 0;
    int emergencyStage = -1;
    int fuelWasted = 0;

    scanf("%d", &fuel);
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &burn);

        if (fuel - burn < 0 && emergencyStage == -1) {
            emergencyStage = i + 1;
            fuelWasted = burn - fuel;
            break;
        }

        fuel -= burn;
        i++;
    }

    if (emergencyStage == -1) {
        printf("Emergency Stage: Not Occurred\n");
        printf("Fuel Wasted: 0");
    } else {
        printf("Emergency Stage: %d\n", emergencyStage);
        printf("Fuel Wasted: %d", fuelWasted);
    }

    return 0;
}
