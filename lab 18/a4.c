#include <stdio.h>
float max(float x,float y,float z);
void main(){
    float a,b,c;
    printf("enter three numbers : ");
    scanf("%f %f %f",&a,&b,&c);
    float d=max(a,b,c);
    printf("%f",d);
}
float max(float x,float y,float z){
    return (x<y)?((y>z)?(y):(z)):((x>z)?(x):(z));
}
