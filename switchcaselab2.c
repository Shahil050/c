
#include <stdio.h>
#include<conio.h>


int main() {
   int choice,i=1,rem,rev=0,sum=0,num;
   printf("MENU\n");
   printf("1.Reverse\n");
   printf("2.Find the sum of number\n:");
   printf("3.Prime number?\n");
   printf("4.exit\n");
   printf("Enter the number:\n");
   scanf("%d",&num);
   printf("Enter choice:");
   scanf("%d",&choice);
   switch(choice){
       case 1:
       while(num!=0){
           rem=num%10;
           rev=rev*10+rem;
           num=num/10;
       }
       printf("Reverse=%d",rev);
       break;
       
       case 2:
       while(num!=0){
           rem=num%10;
           sum=sum+rem;
           num=num/10;
       }
       printf("sum=%d",sum);
       break;
       
       case 3:
       for(i=2;i<num-1;i++){
           if(num%i!=0){
               printf("%d a prime number",num);
               break;
           }
           else{
               printf("%d is not a prime number",num);
               break;
           }
           
       }
      case 4:
      break;
   }
    return 0;
}