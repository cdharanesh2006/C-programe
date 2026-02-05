#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int rem = a % b;
    a /= b;
    printf("%d %d", a, rem);
    return 0;
}