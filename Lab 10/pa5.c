#include<stdio.h>
void main(){
    int n,rem,b=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        b=b*10+rem;
        n=n/10;
    }
    printf("Reversed Number is: %d",b);
}