#include <stdio.h>

int main() {
    int salary, absentDays, i;

    scanf("%d", &salary);
    scanf("%d", &absentDays);

    for(i = 0; i < absentDays; i++) {
        salary = salary - 100;
    }

    printf("Final Salary: ₹%d", salary);

    return 0;
}
