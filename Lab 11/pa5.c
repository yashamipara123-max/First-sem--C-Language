#include<stdio.h>
void main(){
    int i,n,result=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        result=result*i;
    }
    printf("Factorial of %d! = %d",n,result);
}