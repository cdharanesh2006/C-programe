#include <stdio.h>

int main() {
    int n, i;
    int patients, totalPatients = 0, overcrowdedDays = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &patients);
        totalPatients += patients;

        if(patients > 100) {
            overcrowdedDays++;
        }
    }

    printf("Total Patients: %d\n", totalPatients);
    printf("Overcrowded Days: %d", overcrowdedDays);

    return 0;
}