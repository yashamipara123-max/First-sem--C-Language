#include <stdio.h>
void main() {
    int count=0,sum=0,i=1,square,num;
        while (i<=10) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        square = num * num;
        if (square % 10 == 3) {
            sum=sum+square;
            count++;
        }
        i++;
    }
    double average = sum / count;

    printf("Sum of squares: %d\n", sum);
    printf("Average of squares: %f", average);
}