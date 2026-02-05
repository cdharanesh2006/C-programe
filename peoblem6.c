#include <stdio.h>

int main() {
    char ch;

    scanf(" %c", &ch);   // space before %c handles newline

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        printf("Vowel");
    } else {
        printf("Consonant");
    }

    return 0;
}
