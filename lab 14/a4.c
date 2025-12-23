#include <stdio.h>
void main(){
    int num[100],sum=0,max,min,i,n;
    float avg;
    printf("enter number of array elements you want : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter array elements : ");
        scanf("%d",&num[i]);
    }
    for(i=1;i<=n;i++){
        sum=sum+num[i];
    }
    for(i=1;i<=n;i++){
        avg = (float)sum/n;
    }
    for(i=1;i<=n;i++){
        if(max<num[i]){
            max=num[i];
        }
        if(min>num[i]){
            min=num[i];
        }
    }
    printf("sum = %d,avg = %f,max = %d,min = %d",sum,avg,max,min);

}