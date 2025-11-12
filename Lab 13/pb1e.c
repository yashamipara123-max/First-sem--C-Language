#include <stdio.h>
void main(){
    int i,j,rows=5,cols=5;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(i==0||i==rows-1){
                printf("* ");
            }
            else if(j==0||j==cols-1){
                printf("* ");
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
}