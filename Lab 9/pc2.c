#include <stdio.h>
void main() {
    int n,num,remainder,place=1,binary=0;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    num=n;
    while (n>0) {
        remainder=n%2;
        binary=binary+(remainder*place);
        n=n/2;
        place=place*10;
    }
    printf("Binary of %d is: %d",num,binary);
}