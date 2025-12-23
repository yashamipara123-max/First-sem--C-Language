#include <stdio.h>
int factorial(int);
void main(){
    int n;
    printf("enter number n : ");
    scanf("%d",&n);
    int f = factorial(n);
    printf("factorial = %d",f);

}
int factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }else{
        return 1;
    }
}