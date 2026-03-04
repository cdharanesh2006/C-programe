#include <stdio.h>

int main() {
    char str[200];
    int i = 0, count = 0;

    printf("Enter address: ");
    getchar();  // clear buffer
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] == ' ')
            count++;
        i++;
    }

    printf("%d", count);
    return 0;
}