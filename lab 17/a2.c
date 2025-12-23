#include <stdio.h>
void main(){
    int *ptr1,var1=1000;
    ptr1=&var1;
    char *ptr2,var2='A';
    ptr2=&var2;
    float *ptr3,var3=346.78;
    ptr3=&var3;
    double *ptr4,var4=100.54666;
    ptr4=&var4;
    printf("address = %d %d %d %d",ptr1,ptr2,ptr3,ptr4);
    printf("\nvalues = %d %c %f %lf",*ptr1,*ptr2,*ptr3,*ptr4);

}