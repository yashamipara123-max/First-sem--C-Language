#include <stdio.h>
void main(){
    FILE *fp;
    char ch;
    fp = fopen("file1.c","r");
    do{
        ch = getc(fp);
        putchar(ch);
    }while(ch!= EOF);
}