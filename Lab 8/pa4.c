#include<stdio.h>
void main(){
    int i=1,sum=0,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("Sum=%d",sum);
}