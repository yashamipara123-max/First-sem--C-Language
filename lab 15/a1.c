#include <stdio.h>
void main(){
    int arr1[100],arr2[100];
    int i,n;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter elements of array 1 : ");
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    printf("array 2 : ");
    for(i=0;i<n;i++){
        printf("%d",arr2[i]);
    }
    
}