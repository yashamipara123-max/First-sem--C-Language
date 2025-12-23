#include <stdio.h>
#include <string.h>
int ch(char s1[],char b);
void main(){
    char s1[50],b;
    int i;
    printf("enter string : ");
    gets(s1);
    printf("enter character : ");
    scanf("%c",&b);
    
    if(ch(s1,b) == 1){
        printf("character found");
    }else{
        printf("character not found");
    }
}
int ch(char s1[50],char b){
    int c;
    for(int i=0;s1[i]!='\0';i++){
        if (b==s1[i])
        {
            c = 1;
            break;
        }else{
            c = 0;
        }
        
    }
    return c;
}