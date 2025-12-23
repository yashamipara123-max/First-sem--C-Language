#include <stdio.h>
void main(){
    int var=1000,*ptr;
    ptr=&var;
    printf("%d %d",ptr,*ptr);
}