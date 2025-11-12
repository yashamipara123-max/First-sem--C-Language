#include<stdio.h>
void main(){
    int n,i=2,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            count++;
        }
        i++;
    }
    if(count==0){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
}