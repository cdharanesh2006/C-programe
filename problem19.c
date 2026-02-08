#include <stdio.h>

int main() {
    int n, i;
    int noise, maxNoise, noisyPeriods = 0;

    scanf("%d", &n);

    scanf("%d", &noise);
    maxNoise = noise;

    if(noise > 70) {
        noisyPeriods++;
    }

    for(i = 1; i < n; i++) {
        scanf("%d", &noise);

        if(noise > maxNoise) {
            maxNoise = noise;
        }

        if(noise > 70) {
            noisyPeriods++;
        }
    }

    printf("Maximum Noise: %d\n", maxNoise);
    printf("Noisy Periods: %d", noisyPeriods);

    return 0;
}