#include <stdio.h>
void main(){
    int n,i,j;
    float e=1.0,fact;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        fact=1.0;
        for(j=1;j<=i;j++) {
            fact=fact*j;
        }
        e=e+(1.0/fact);
    }
    printf("Value of e using %d terms: %f", n, e);
}