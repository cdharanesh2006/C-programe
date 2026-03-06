#include <stdio.h>

void checkPrime(int n) {
    int i, flag = 1;

    if(n <= 1) {
        printf("Not Prime");
        return;
    }

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Prime");
    else
        printf("Not Prime");
}

int main() {
    int n;
    scanf("%d", &n);
    checkPrime(n);
    return 0;
}