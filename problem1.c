
#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    int max1 = INT_MIN, max2 = INT_MIN;

    printf("Enter number of employees: ");
    scanf("%d", &N);

    int salary[N];

    printf("Enter salaries:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &salary[i]);
    }

    for (int i = 0; i < N; i++) {
        if (salary[i] > max1) {
            max2 = max1;
            max1 = salary[i];
        }
        else if (salary[i] < max1 && salary[i] > max2) {
            max2 = salary[i];
        }
    }

    if (max2 == INT_MIN) {
        printf("Second highest salary does not exist.\n");
    } else {
        printf("Second highest salary: %d\n", max2);
    }

    return 0;
}


