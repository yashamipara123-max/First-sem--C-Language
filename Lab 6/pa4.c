#include <stdio.h>
void main() {
    int num,lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    lastDigit=num%10;

    if (lastDigit%2==0)
        printf("Last digit %d is Even\n", lastDigit);
    else
        printf("Last digit %d is Odd\n", lastDigit);
}