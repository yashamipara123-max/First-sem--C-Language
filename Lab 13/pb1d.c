#include<stdio.h>
void main(){
    int i,j,space;
    char ch;
    for(i=1;i<=5;i++){
        ch='A';
        for(space=5-i;space>0;space--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ",ch);
                ch++;
            }
            else{
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}