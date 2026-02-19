#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Input: number operator number (e.g., 5 + 3)
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero not allowed");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
