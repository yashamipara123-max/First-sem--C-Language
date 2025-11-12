#include<stdio.h>
#include<math.h>
void main(){
    int n,count=0,sum=0,rem,temp,i=0,original;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    original=n;
    while(n!=0){
        n=n/10;
        count++;
    }
    while(i<=count){
        rem=temp%10;
        sum=sum+(pow(rem,count));
        temp=temp/10;
        i++;
    }
    if(sum==original){
        printf("%d is an Armstrong number",original);
    }
    else{
        printf("%d is not an Armstrong number",original);
    }
}