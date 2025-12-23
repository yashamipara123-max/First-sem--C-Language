#include <stdio.h>
#include <string.h>
char upper(char mix[]);
void main(){
    char ch[500];
    printf("enter the string : ");
    gets(ch);
    upper(ch);
    printf("the upper case string : %s",ch);
}
char upper(char mix[]){
    for(int i =0;mix[i]!=0;i++){
        if(mix[i]>='a' && mix[i]<='z'){
            mix[i] -=32;
        }
    }
}
