#include <stdio.h>
void main(){
    int arr[100],n,i;
    printf("enter size of array : ");
    scanf("%d",&n);
    int *ptr[n];
    
    
    for(i=1;i<=n;i++){
        printf("enter elements : ");
        scanf("%d",&arr[i]);
        ptr[i]=&arr[i];
    }
    for(i=1;i<=n;i++){
        printf("%d",*ptr[i]);
    }
}