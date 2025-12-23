#include <stdio.h>
int abc(int);
void main()
{   int n;
    printf("etner number");
    scanf("%d",&n);
    int i=abc(n);
    printf("%d",--i);
}
int abc(int n)
{
    return n++;
}