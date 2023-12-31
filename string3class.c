// Uppercase to lower case and vice versa
#include<stdio.h>
#include<string.h>
int main(){
   
   char str[25];
   int i;
   printf("Enter the uppercase string: ");
   scanf("%s",str);
 
   for(i=0;i<=strlen(str);i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }
   printf("\nLower Case String is: %s\n",str);
   printf("Enter the lowercase string: ");
   scanf("%s",str);
 
  for(i=0;str[i];i++)  
    {
        if(str[i]>=97 && str[i]<=122)
         str[i]-=32;
 	}
     
    printf("Uppercase string is =%s\n",str);
 
   return 0;
}