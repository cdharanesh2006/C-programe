#include <stdio.h>

int main() {
    int n, i;
    int expense, total = 0, overspend = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &expense);
        total += expense;

        if(expense > 1000) {
            overspend++;
        }
    }

    printf("Total Expense: %d\n", total);
    printf("Overspend Days: %d", overspend);

    return 0;
}
