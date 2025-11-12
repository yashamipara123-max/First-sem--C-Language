#include <stdio.h>
#include <math.h>
void main() {
    int a, b, c;

    printf("Enter three sides of the triangle:");
    scanf("%d %d %d", &a, &b, &c);

    // Check for triangle validity
    if (a + b > c && b + c > a && c + a > b) {
        // Check for equilateral
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        // Check for isosceles
        else if (a == b || b == c || c == a) {
            printf("Isosceles Triangle\n");
        }
        // Check for right-angled
        else if (a * a == b * b + c * c ||
                 b * b == a * a + c * c ||
                 c * c == a * a + b * b) {
            printf("Right-angled Triangle\n");
        }
        // Otherwise scalene
        else {
            printf("Scalene Triangle\n");
        }
    } else {
        printf("Invalid Triangle: sides do not satisfy triangle inequality.\n");
    }
}