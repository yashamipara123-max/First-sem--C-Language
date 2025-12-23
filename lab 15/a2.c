#include <stdio.h>
void main() {
    int i,n,nc;
    int arr[100];
    printf("enter size of array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter elements : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<0){
            nc++;
        }
    }
    printf("total number of negetive element : %d",nc);
}