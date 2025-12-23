#include <stdio.h>
void main(){
    int a,b;
    printf("enter num1 : ");
    scanf("%d",&a);
    printf("enter num2 : ");
    scanf("%d",&b);
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("swap = %d %d",*ptr1,*ptr2);
}