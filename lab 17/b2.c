#include <stdio.h>
void main(){
    int arr1[100],arr2[100],*p1[100],*p2[100],n,i,temp;
    printf("enter size of array n : ");
    scanf("%d",&n);

    printf("1st array \n");
    for(i=1;i<=n;i++){
        printf("enter elements: ");
        scanf("%d",&arr1[i]);
        p1[i]=&arr1[i];
    }
    printf("\n2nd array \n");
    for(i=1;i<=n;i++){
        printf("enter elements: ");
        scanf("%d",&arr2[i]);
        p2[i]=&arr2[i];
    }
    for(i=1;i<=n;i++){
        temp=*p1[i];
        *p1[i]=*p2[i];
        *p2[i]=temp;
    }
    printf("swap\n");
    printf("1st array\n");
    for(i=1;i<=n;i++){
        printf("%d",*p1[i]);
    }
    printf("\n2nd array\n");
    for(i=1;i<=n;i++){
        printf("%d",*p2[i]);
    }
    
}