#include <stdio.h>
struct student
{
    int rollno;
    char name[50];
    int back;
};
void main(){
    struct student s[5];
    for(int i=0;i<5;i++){
        printf("enter roll no. : ");
        scanf("%d",&s[i].rollno);
        printf("enter name : ");
        scanf("%s",&s[i].name);
        printf("enter roll no. : ");
        scanf("%d",&s[i].back);
    }
    
    FILE *fp;
    char name[100]={'H','I'};
    fp=fopen("hello.txt","w");
    
    if(fp==NULL){
        printf("file doesn't exist");
    }
    for(int i=0;i<5;i++){
        fprintf(fp,"%d %s %d",s[i].rollno,s[i].name,s[i].back);
    }
    fclose(fp);
}