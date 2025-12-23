 #include <stdio.h>
 #include <string.h>
 void main(){
    char s1[50],s2[50];
    char compare;

   printf("enter charcaters : ");
   scanf("%c",&s1[50]);

   strrev(s1);
   printf("\n%s",s1);

   strcpy(s2,s1);
   printf("\n copy = %s",s2);

   compare = strcmp(s1,s1);
   printf("\n%d",compare);

   if(compare==0){
      printf("number is palindrome");
   }else{
      printf("number isn't palindrome");
   }

 }