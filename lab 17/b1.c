#include <stdio.h>
void main(){
    int arr[100],*p1[100],*p2[100],n,i,b[100];
    printf("enter size of array n : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        printf("enter elements: ");
        scanf("%d",&arr[i]);
        p1[i]=&arr[i];
        b[i]=*p1[i];
    }
    printf("first array\n");
    for(i=1;i<=n;i++){
    printf(" %d",*p1[i]);
    }
    printf("\n");
    for(i=1;i<=n;i++){
        p2[i]=&b[i];
    }
    printf("\nsecond array\n");
    for(i=1;i<=n;i++){
    printf(" %d",*p2[i]);
    }
}