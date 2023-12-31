#include <stdio.h>
// #include<conio.h>


int main() {
   int row;
  printf("Enter row:");
  scanf("%d",&row);
  for(int i=row;i>=1;i--){
      for(int j=1;j<=i;j++){
          printf("*\t");
      }
      printf("\n");
  }
    return 0;
}