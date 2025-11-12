#include <stdio.h>
void main() {
    int a, b, c, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = ((a > b) ? a : b) * c;

    printf("Result: %d", result);
}