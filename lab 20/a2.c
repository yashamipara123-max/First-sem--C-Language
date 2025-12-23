#include <stdio.h>
#include <string.h>
void main(){
    char s1[50],s2[50];
    printf("enter word : ");
    scanf("%c",&s1[50]);

    char *str1,*str2;
    str1=s1;
    str2=s2;

    while(s1!='\0'){
        if(*str1 >= 'A' && *str1 <= 'Z' || *str1 >= 'a' && *str1 <= 'z' || *str1 >= '0' && *str1 <= '9'){
            *str2=*str1;
             str2++;
        }
        str1++;
    }
    printf("%s",str2);
    str2="\0";
}