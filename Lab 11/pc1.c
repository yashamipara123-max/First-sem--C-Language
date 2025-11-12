#include<stdio.h>
void main(){
    int n,count=0,temp,firstdigit,lastdigit,revers=0,rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    lastdigit=n%10;
    while(n!=0){
        firstdigit=n%10;
        n=n/10;
        count++;
    }
    printf("%d",lastdigit);
    temp=temp/10;
    while(temp!=0){
        rem=temp%10;
        revers=(revers*10)+rem;
        temp=temp/10;
    }
    revers=revers/10;
    while(revers!=0){
        rem=revers%10;
        printf("%d",rem);
        revers=revers/10;
        }
    printf("%d",firstdigit);
}