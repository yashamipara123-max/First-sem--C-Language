#include<stdio.h>
void main(){
    int n,i=1,num,sum=0;
    printf("Enter terms: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&num);
        sum=sum+num;
        i++;
    }
    printf("Sum is: %d",sum);
    printf("\nAverage is: %f",(float)sum/n);
}