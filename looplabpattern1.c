#include <stdio.h>
// #include<conio.h>


int main() {
   int row;
  printf("Enter row:");
  scanf("%d",&row);
   for(int i=1;i<=row;i++){
       for(int j=1;j<=i;j++){
           printf("%d\t",j);
       }
       printf("\n");
   }
   
       
       
   
    return 0;
}
