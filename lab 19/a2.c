#include <stdio.h>

int display(int a[],int n);
void main(){
    int i,n,a[100];
    printf("enter array size : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter elements : ");
        scanf("%d",&a[i]);
    }int d = display(a,n);
}
int display(int a[100],int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}