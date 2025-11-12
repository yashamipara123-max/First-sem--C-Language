#include<stdio.h>
void main(){
    int i=1,sum=0,n;
    printf("Enter n: ");
    scanf("%d",&n);
    while(i<=n)
    {
    sum=sum+(i*i);
    i++;
    }
    printf("Sum of series is= %d",sum);
}