#include <stdio.h>
float si(float p, float r, float t);
void main(){
    float p,r,t;
    printf("enter principal amount : ");
    scanf("%f",&p);
    printf("enter rate  : ");
    scanf("%f",&r);
    printf("enter time period : ");
    scanf("%f",&t);

    float d = si(p,r,t);
    printf("simple interest : %f",d);
}
float si(float p, float r, float t){
    return (p*r*t)/100;
}
