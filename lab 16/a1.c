#include <stdio.h>
void main(){
    int m,n,i,j;
    printf("enter rows m : ");
    scanf("%d",&m);
    printf("enter colomns n : ");
    scanf("%d",&n);
    int data[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("enter elements : ");
            scanf("%d",&data[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
    
}