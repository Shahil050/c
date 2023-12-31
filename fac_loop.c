#include <stdio.h>

int main() {
    int num,a=1;
    printf("Enter number:");
    scanf("%d",&num);
    if(num>0){
        for(int i=1;i<=num;i++){
            a=a*i;
            // printf("The factorial of %d is %d",num,a);
        }
        printf("The factorial of %d is %d",num,a);
        
    }
    else if(num==0){
        printf("the factorial of 0 is 1");
    }else{
        printf("factorial of negative number doesn`t exist");
    }
    
    return 0;
}