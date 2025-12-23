#include <stdio.h>
#include <string.h>
int power(int base,int expo);
void main(){
    int base,expo;
    printf("enter base and power : ");
    scanf("%d %d",&base,&expo);
    int ans = power(base,expo);
    printf("%d",ans);
}
int power(int base,int expo){
    if(expo==1){
        return base;
    }else{
        return base*power(base,expo-1);
    }
}