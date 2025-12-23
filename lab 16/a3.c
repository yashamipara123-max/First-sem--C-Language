#include <stdio.h>
void main(){
    int i,j,r,m;
    int data[20][2];
    for(i=0;i<20;i++){
        for(j=0;j<2;j++){
            printf("enter roll no. & marks : ");
            scanf("%d %d",&r,&m);
        }
    }
    for(i=0;i<20;i++){
        for(j=0;j<2;j++){
            printf("%d",data[r][m]);
        }printf("\n");
    }
}