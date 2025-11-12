#include"stdio.h"
void main(){
    int n,count=0,sum=0;
    printf("Enter numbers If you want to stop enter -1: ");
    while(n!=-1){
        scanf("%d",&n);
        if(n!=-1){
            sum=sum+n;
            count++;
        }
    }
    printf("Sum is: %d",sum);
    printf("\nAverage is: %f",(float)sum/count);
}