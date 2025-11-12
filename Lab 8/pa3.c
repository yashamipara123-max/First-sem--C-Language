#include<stdio.h>
void main()
{
    int a,b,i;
    printf("Enter start point:");
    scanf("%d",&a);
    printf("Enter end point:");
    scanf("%d",&b);
    i=a;
    while (i<=b)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}