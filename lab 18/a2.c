#include <stdio.h>
int comp(int x,int y);
int compo(int x,int y);
void main(){
    int a,b;
    printf("enter two numbers : ");
    scanf("%d %d",&a,&b);
    int c=comp(a,b);
    printf("maximum = %d",c);
    int d=compo(a,b);
    printf("\nminimum = %d",d);
}
int comp(int x,int y){
    int max;
    max=(x>y)?(x):(y);
    return max;
}
int compo(int x,int y){
    int min;
    min=(x<y)?(x):(y);
    return min;
}