#include <stdio.h>

int main() {
    // Write C code here
    int num1,num2,num3;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the third number:");
    scanf("%d",&num3);
    if(num1>num2&&num1>num3){
        printf("%d is largest",num1);
    }
    else if (num2>num1&&num2<num3){
        printf("%d is largest",num3);
    }
    else{
        printf("%d is largest",num2);
        
    }
        
        

    return 0;
}