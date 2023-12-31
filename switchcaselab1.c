#include <stdio.h>
#include<conio.h>


int main() {
   float a,b,result;
   int choice,mod;
   printf("MENU");
   printf("1.Sum\n");
   printf("2.Sub\n");
   printf("3.Mul\n");
   printf("4.Div\n");
   printf("4.Modulo\n");
   printf("Enter two number:");
   scanf("%f%f",&a,&b);
   printf("Enter your choice\n");
   scanf("%d",&choice);
   switch(choice){
       case 1:
       result=a+b;
       printf("Sum=%f",result);
       break;
       
       case 2:
       result=a-b;
       printf("Subtraction=%f",result);
       break;
       
       case 3:
       result = a*b;
       printf("Multiplication=%f",result);
       break;
       
       case 4:
       result=a/b;
       printf("division=%f",result);
       break;

    //    case 4:
    //    mod=a%b;
    //    printf("modulo=%d",mod);
       
       default:
       break;
       
   }
    return 0;
}