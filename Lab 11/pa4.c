#include<stdio.h>
void main(){
    int i,result=1,x,y;
    printf("Enter base number: ");
    scanf("%d",&x);
    printf("Enter exponent number: ");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
        result=result*x;
    }
    printf("x^y = %d",result);
}