#include <stdio.h>
#include <string.h>
void main(){
    char str[100];
    int length;

    printf("enter a string without space : ");
    scanf("%s",&str);
    length = strlen(str);

    printf("%s",str);
    printf("the length of the string is %d",length);
}