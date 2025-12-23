#include <stdio.h>
void main(){
    int num[100],pc=0,nc=0,i,n;
    printf("enter number of array elements you want : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter array elements : ");
        scanf("%d",&num[i]);
    }
    for(i=1;i<=n;i++){
        if(num[i]>=0){
            pc++;
        }else if(num[i]<0){
            nc++;
        }
    }
    printf("positive = %d & negetive = %d",pc,nc);

}