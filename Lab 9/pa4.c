#include<stdio.h>
void main(){
    int i=1,n,result=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n){
        result=result*i;
        i++;
    }
    printf("Factorial of %d! = %d",n,result);
}