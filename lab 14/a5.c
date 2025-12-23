#include <stdio.h>
void main(){
    int data[5],i,h,w,nc=0;
    for(i=1;i<=5;i++){
        printf("enter height and weight for person ",i );
        scanf("%d %d",&h,&w);
    }
    for(i=1;i<=5;i++){
        if(h>170 && w<50){
            nc++;
        }
    }
    printf("number of person having height greater than 150 and weight less than 50 = %d",nc);
}