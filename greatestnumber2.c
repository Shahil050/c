#include <stdio.h>

int main() {
    int a,b,c,num;
    printf("Enter the number of input times:");
    scanf("%d",&num);
    printf("Enter the first number:");
    scanf("%d",&a);
    for(int i=0;i<num-1;i++){
        
        printf("Enter the next number:");
        scanf("%d",&b);
        if(a>b&&a>c){
            c=a;
            
        }
        else if(b>c){
            c=b;
           
        }
        else{
            c=c;
             
        }
        }
        printf("The largest number is %d ",c);
}