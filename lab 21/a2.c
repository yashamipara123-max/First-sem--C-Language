#include <stdio.h>
struct book{
    char bookname[30],authorname,publicationname;
    int price;
};
void main(){
    struct book b[3];
    int i;
    for(i=0;i<3;i++){
        printf("enter book name : ");
        scanf(" %s",&b[i].bookname);
        getchar();

        printf("enter author name : ");
        scanf(" %s",&b[i].authorname);
        getchar();

        printf("enter publication name : ");
        scanf(" %s",&b[i].publicationname);
        getchar();

        printf("enter price : ");
        scanf("%d",&b[i].price);
    }

    for(i=0;i<3;i++){
        printf(" %s %s %s %d\n",b[i].bookname,b[i].authorname,b[i].publicationname,b[i].price);
    }
}
