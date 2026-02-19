#include <stdio.h>

int main() {
    int capacity, n, i;
    int items;
    int overflowDays = 0;

    
    scanf("%d", &capacity);

    
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &items);

        if(capacity >= 0 && capacity - items < 0) {
            overflowDays++;
        }

        capacity -= items;
    }

    printf("Remaining Capacity: %d\n", capacity);
    printf("Overflow Days: %d", overflowDays);

    return 0;
}