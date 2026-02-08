#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    switch (ch)
    {
        case '1':
            printf("a");
            break;
        case '2':
            printf("e");
            break;
        case '3':
            printf("i");
            break;
        case '4':
            printf("o");
            break;
        case '5':
            printf("u");
            break;
        case '6':
            printf("Vowel");
            break;
        default:
            printf("Invalid Vowel");
            break;
    }
    return 0;
}
