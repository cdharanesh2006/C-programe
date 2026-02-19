#include <stdio.h>

int main() {
    int totalData, n, i;
    int usage;
    int successfulDays = 0;

    scanf("%d", &totalData);

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &usage);

        if(totalData >= usage) {
            totalData -= usage;
            successfulDays++;
        } else {
            break;  
        }
    }

   
    printf("Remaining Data: %d\n", totalData);
    printf("Successful Days: %d", successfulDays);

    return 0;
}