#include <stdio.h>
#include <string.h>
void swap(int a[],int b[],int n){
    int i;
    for(i=0;i<n;i++){
        int temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}
void main(){
    int a[50],b[50],n,d;
    printf("enter size of arrays : ");
    scanf("%d",&n);
    
    printf("enter elements of array 1\n");
    for(int i=0;i<n;i++){
    printf("enter elements : ");
    scanf("%d",&a[i]);
    }

    printf("enter elements of array 2\n");
    for(int i=0;i<n;i++){
    printf("enter elements : ");
    scanf("%d",&b[i]);
    }

    swap(a,b,n);
    printf("after swapping : ");

    printf("first array : ");
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);
    }

    printf("second array : ");
    for(int i=0;i<n;i++){
    printf("%d ",b[i]);
    }
}