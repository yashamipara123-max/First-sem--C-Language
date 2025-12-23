#include <stdio.h>
#include <string.h>
void main(){
    char s1[50]="Their";
    char s2[50]="There";
    int length;
    int comparison;

    length = strlen(s1);
    printf("length = %d",length);

    strrev(s1);
    printf("\nreverse of s1 = %s",s1);

    strlwr(s1);
    printf("\nlower of s1 = %s",s1);


    strupr(s1);
    printf("\nuper of s1 = %s",s1);

    strupr(s2);
    printf("\nuper of s2 = %s",s2);

    strcpy(s1,s2);
    printf("\ncopy = %s",s1);

    char compare = strcmp(s1,s2);
    printf("\ncompare = %s",compare);

    strcat(s1,s2);
    printf("\nusing strcat = %s",s1);
}