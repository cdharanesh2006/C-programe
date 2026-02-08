#include <stdio.h>

int main() {
    int n, i;
    int voltage, minVoltage, lowEvents = 0;

    scanf("%d", &n);

    scanf("%d", &voltage);
    minVoltage = voltage;

    if(voltage < 210) {
        lowEvents++;
    }

    for(i = 1; i < n; i++) {
        scanf("%d", &voltage);

        if(voltage < minVoltage) {
            minVoltage = voltage;
        }

        if(voltage < 210) {
            lowEvents++;
        }
    }

    printf("Minimum Voltage: %d\n", minVoltage);
    printf("Low Voltage Events: %d", lowEvents);

    return 0;
}