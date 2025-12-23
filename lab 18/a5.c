#include <stdio.h>
int swap(int x,int y);
void main(){
    int a,b;
    printf("enter a & b : ");
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("%d %d ",a,b);
}
int swap(int x,int y){
    int temp=x;
        x=y;
        y=temp;
        printf("\nafter swap =%d %d ",x,y);
}