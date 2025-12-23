#include <stdio.h>
#include <string.h>
void main(){
    char s1[50]="their";
    char s2[50]="there";
    int lentgh;
    char compare;

    printf("enter case number for output : ");
    scanf("%d",&s1[50]);
    switch(s1[50]){
        
        case 1 :
        strrev(s1);
        printf("\nreverse of s1 = %s",s1);
        break;

        case 2 :
        strlwr(s1);
        printf("\nlower of s1 = %s",s1);
        break;

        case 3 : 
        strupr(s1);
        printf("\nupper of s1 = %s",s1);
        break;

        case 4 :
        strcpy(s1,s2);
        printf("\ncopy of s1 = %s",s1);
        break;

        case 5 :
        compare = strcmp(s1,s2);
        printf("\ncompare of s1 s2 = %d",compare);
        break;

        case 6 :
        strcat(s1,s2);
        printf("\nusing strcat = %s",s1);
        break;

        case 7 :
        lentgh = strlen(s1);
        printf("%d",lentgh);
        break;
    }
}