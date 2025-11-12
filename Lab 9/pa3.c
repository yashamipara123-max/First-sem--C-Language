#include<stdio.h>
void main(){
    int i=1,result=1,x,y;
    printf("Enter base number: ");
    scanf("%d",&x);
    printf("Enter exponent number: ");
    scanf("%d",&y);
    while(i<=y){
        result=result*x;
        i++;
    }
    printf("x^y = %d",result);
}