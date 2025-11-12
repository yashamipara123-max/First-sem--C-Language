#include<stdio.h>
void main(){
    int n,lastdigit,firstdigit;
    printf("Enter a number: ");
    scanf("%d",&n);
    lastdigit=n%10;
    while(n!=0){
        firstdigit=n%10;
        n=n/10;
    }
    printf("sum of first and last digit: %d",firstdigit+lastdigit);
}