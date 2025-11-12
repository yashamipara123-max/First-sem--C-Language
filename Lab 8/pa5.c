#include<stdio.h>
void main(){
    int n,oddcount=0,evencount=0,i=1;
    while (i<=10)
    {
        printf("Enter number %d:",i);
        scanf("%d",&n);
        if(n%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
        i++;
    }
    printf("Even count=%d\n",evencount);
    printf("Odd count=%d",oddcount);
}