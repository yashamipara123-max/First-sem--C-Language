#include <stdio.h>
#include <math.h>
void main() {
    printf("Number\tSquare Root\n");
    for (int i = 0; i <= 9; i++) {
        printf("%d\t%f\n", i, sqrt(i));
    }
}