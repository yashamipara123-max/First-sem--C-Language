#include <stdio.h>
void main() {
    int a, b, c;
    float average;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    average = (a + b + c) / 3.0;
    printf("Average = %f\n", average);
}