#include<stdio.h>
void main(){
    int x,y,i,j,result=1,temp;
    printf("Enter base x: ");
    scanf("%d",&x);
    printf("Enter exponent y: ");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
        temp=0;
        for(j=1;j<=x;j++){
            temp=temp+result;
        }
        result=temp;
    }
    printf("Result: %d",result);
}