#include <stdio.h>

int main() {
    int n, i;
    int mark, total = 0, failed = 0;
    int average;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &mark);
        total += mark;

        if(mark < 40) {
            failed++;
        }
    }

    average = total / n;

    printf("Average Score: %d\n", average);
    printf("Failed Subjects: %d", failed);

    return 0;
}