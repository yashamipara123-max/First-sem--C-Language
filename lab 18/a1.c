#include <stdio.h>
int add(int x,int y);
void main(){
    int a,b;
    a=10,b=20;
    int sum =add(a,b);
    printf("%d",sum);
}
int add(int x,int y){
    return x+y;
}