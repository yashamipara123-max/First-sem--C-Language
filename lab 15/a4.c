#include <stdio.h>
void main(){
    int i,n,k,arr[100],found;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter the elements : ");
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search in array : ");
    scanf("%d",&k);

    for(i=0;i<n;i++){
        if(arr[i]==k){
            found = 1;
        }
    }
    if(found){
        printf("element found");
    }else{
        printf("element not found");
    }
}