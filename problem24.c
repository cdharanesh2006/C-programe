#include <stdio.h>

int main() {
    int n, i;
    int calls, totalCalls = 0, overloadedHours = 0;

    
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &calls);
        totalCalls += calls;

        if(calls > 40) {
            overloadedHours++;
        }
    }

    printf("Total Calls: %d\n", totalCalls);
    printf("Overloaded Hours: %d", overloadedHours);

    return 0;
}