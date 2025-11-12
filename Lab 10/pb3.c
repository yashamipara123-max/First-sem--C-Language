#include<stdio.h>
void main(){
    int n,rem,b=0,temp;
    printf("Enter a Number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        b=b*10+rem;
        n=n/10;
    }
    if(b==temp){
        printf("The number is a palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }
}