#include <stdio.h>
void main() {
    float basic, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic >= 30000) {
        hra = 0.30 * basic;
        da = 0.95 * basic;  // Assuming DA = 95% for >= 30000
    } else if (basic >= 20000) {
        hra = 0.25 * basic;
        da = 0.90 * basic;
    } else if (basic >= 10000) {
        hra = 0.20 * basic;
        da = 0.80 * basic;
    } else {
        hra = 0.15 * basic;  // Optional: default for < 10000
        da = 0.70 * basic;
    }

    gross = basic + hra + da;

    printf("Gross Salary = %f\n", gross);
}