#include <stdio.h>

void main() {
    char ch;

    // Print uppercase letters
    ch = 'A';
    printf("Uppercase letters:\n");
    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }

    printf("\n\n");

    // Print lowercase letters
    ch = 'a';
    printf("Lowercase letters:\n");
    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }

    printf("\n");
}