#include <stdio.h>
struct distance{
    int feet,inches;
};
void main(){
    struct distance d1,d2,d3;
    int i;
    printf("enter 1st feet : ");
    scanf(" %d",&d1.feet);
    printf("enter 1st inches : ");
    scanf(" %d",&d1.inches);
    printf("enter 2nd feet : ");
    scanf(" %d",&d2.feet);
    printf("enter inches : ");
    scanf(" %d",&d2.inches);

    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;

    if(d3.inches>12){
        d3.feet++;
        d3.inches-=12;
    }
    printf("%d %d",d3.feet,d3.inches);
}
