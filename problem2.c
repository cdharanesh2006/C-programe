#include <stdio.h>
int findMaximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
int main() {
    int A, B, result;
    scanf("%d %d", &A, &B);
    result = findMaximum(A, B);
    printf("%d", result);
    return 0;
}