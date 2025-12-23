#include <stdio.h>
void main(){
    int data[3][3];
    int i,j,pc=0,nc=0,zc=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter element : ");
            scanf("%d",&data[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(data[i][j] > 0){
                pc++;
            }else if(data[i][j] < 0){
                nc++;
            }else if(data[i][j] == 0){
                zc++;
            }
        }
    }
    printf("positive = %d, negetive =  %d,zero = %d",pc,nc,zc);
}