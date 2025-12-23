#include <stdio.h>

int reversenum(int n,int rev){
    int rem;
    if(n==0)
    return rev;
    return reversenum(n/10, rev*10 + (n%10));

}

void main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int ans = reversenum(n,0);
    printf("%d",ans);
}


