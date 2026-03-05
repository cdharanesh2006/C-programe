#include <stdio.h>

float areaCircle(int r) {
    return 3.14 * r * r;
}

int main() {
    int r;
    scanf("%d", &r);
    printf("%.2f", areaCircle(r));
    return 0;
}