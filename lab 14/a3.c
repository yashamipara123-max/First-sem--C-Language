#include <stdio.h>
void main(){
    int num[100],oddc=0,evenc=0,i,n;
    printf("enter number of array elements you want : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter array elements : ");
        scanf("%d",&num[i]);
    }
    for(i=1;i<=n;i++){
        if(num[i]%2==0){
            evenc++;
        }else{
            oddc++;
        }
    }
    printf("odd = %d & even = %d",oddc,evenc);

}