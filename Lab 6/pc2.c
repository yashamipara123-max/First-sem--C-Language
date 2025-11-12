#include <stdio.h>
void main() {
    int r, g, b;
    float white, c, m, y, k;

    printf("Enter RGB values (0-255): ");
    scanf("%d %d %d", &r, &g, &b);

    // Check for black
    if (r == 0 && g == 0 && b == 0) {
        c = m = y = 0.0;
        k = 1.0;
    } else {
        float rf = r / 255.0;
        float gf = g / 255.0;
        float bf = b / 255.0;

        white = (rf > gf) ? ((rf > bf) ? rf : bf) : ((gf > bf) ? gf : bf);

        c = (white - rf) / white;
        m = (white - gf) / white;
        y = (white - bf) / white;
        k = 1.0 - white;
    }

    printf("\nCMYK values:\n");
    printf("Cyan    = %f\n", c);
    printf("Magenta = %f\n", m);
    printf("Yellow  = %f\n", y);
    printf("Black   = %f\n", k);
}