#include <stdio.h>

float calculateSimpleInterest(int P, int R, int T) {
    float SI;
    SI = (P * R * T) / 100.0;
    return SI;
}

int main() {
    int P, R, T;
    float result;
    scanf("%d %d %d", &P, &R, &T);
    result = calculateSimpleInterest(P, R, T);
    printf("%.2f", result);
    return 0;
}