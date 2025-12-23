#include "stdio.h"
#include "string.h"
char replacecharater(char cha[100],char a,char b);
void main(){
    char ch[100],a,b;
    printf("Enter the string : ");
    gets(ch);
    int lenght=strlen(ch);
    printf("Enter the charter you want to replace : ");
    scanf(" %c",&a);
    printf("Enter the charter replaced by it : ");
    scanf(" %c",&b);
    replacecharater(ch,a,b);
    printf("%s",ch);
}
char replacecharater(char cha[100],char a, char b)
{
    int i=0;
    for(i=0;cha[i]!='\0';i++){
        if(cha[i]==a){
            cha[i]=b;
        }
    }
    return 0;
}