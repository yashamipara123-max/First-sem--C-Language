#include <stdio.h>
struct employee{
    char employeename[20];
    int salary;
};
void main(){
    int i;
    struct employee e[20];
    for(i=0;i<2;i++){
    printf("enter employeename : ");
    scanf(" %s",&e[i].employeename);
    getchar();
    printf("enter salary : ");
    scanf("%d",&e[i].salary);
    }
    for(i=0;i<2;i++){
    printf("%s %d\n",e[i].employeename,e[i].salary);
    }
}
