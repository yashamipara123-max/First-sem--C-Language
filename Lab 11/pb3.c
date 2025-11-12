#include <stdio.h>
void main(){
    int i;
    printf("ASCII characters and their values:\n\n");
    for(i=33;i<127;i++){
        printf("ASCII value: %3d --> Character: %c\n", i, i);
    }
}