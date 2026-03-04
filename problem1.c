#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter username: ");
    scanf("%s", str);

    while(str[count] != '\0') {
        count++;
    }

    printf("%d", count);
    return 0;
}