#include <stdio.h>
void main(){
    int data[100],n,i;
    printf("enter total numbers: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("enter elements : ");
        scanf("%d",&data[i]);
    }
    printf("for normal\n");
    for(i=1;i<=n;i++){
        printf("%d ",data[i]);
    }
    printf("\nfor reverse\n");
    for(i=n;i>=1;i--){
        printf("%d ",data[i]);
    }

}