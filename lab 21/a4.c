#include <stdio.h>
struct student{
    char studentname[50];
    float percentage;
    int age;
};
void main(){
    int i;
    struct student s[50];
    
    for(i=0;i<5;i++){
        printf("enter student name :");
        scanf(" %s",s[i].studentname);
        getchar();
    
        printf("enter percentage :");
        scanf(" %.2f",&s[i].percentage);

        printf("enter age :");
        scanf(" %d",&s[i].age);
    }
    for(i=0;i<5;i++){
        printf(" %s %f %d",s[i].studentname,s[i].percentage,s[i].age);
    }
}