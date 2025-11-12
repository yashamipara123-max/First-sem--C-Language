#include <stdio.h>
void main() {
    int num1, num2;
    int dividend, divisor;
    int quotient = 0, remainder;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Determine which is smaller and which is larger
    if (num1 > num2) {
        dividend = num1;
        divisor = num2;
    } else {
        dividend = num2;
        divisor = num1;
    }

    // Division logic without / or %
    remainder = dividend;
    while (remainder >= divisor) {
        remainder -= divisor;
        quotient++;
    }

    // Output results
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
}