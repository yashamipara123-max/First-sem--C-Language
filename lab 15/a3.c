#include <stdio.h>
void main() {
    int i,n,j;
    int arr[100];
    printf("enter size of array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter elements : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%3==0){
            j++;
        }
    }
    printf("total number of element which are divisible by 3 is : %d",j);
}