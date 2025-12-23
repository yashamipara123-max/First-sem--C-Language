#include <stdio.h>
struct time{
    int hour;
    int minute;
    int second;
};
void main(){
    struct time t1;
    struct time t2;
    struct time t3;
    printf("enter value of hour : ");
    scanf("%d",&t1.hour);
    printf("enter value of minute : ");
    scanf("%d",&t1.minute);
    printf("enter value of second : ");
    scanf("%d",&t1.second);
    printf("enter value of hour : ");
    scanf("%d",&t2.hour);
    printf("enter value of minute : ");
    scanf("%d",&t2.minute);
    printf("enter value of second : ");
    scanf("%d",&t2.second);

    t3.hour = t1.hour + t2.hour;
    t3.minute = t1.minute + t2.minute;
    t3.second = t1.second + t2.second;

    if(t3.second>60){
        t3.minute++;
        t3.second-=60;
    }
    if(t3.minute>60){
        t3.hour++;
        t3.minute-=60;
    }
    printf("%d %d %d",t3.hour,t3.minute,t3.second);

}