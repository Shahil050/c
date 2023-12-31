#include <stdio.h>

int main() {
    int a,num1,num2;
    printf("Enter the first number of multiple:");
    scanf("%d",&num1);
    printf("Enter the second number of multiple:");
    scanf("%d",&num2);
    for(int i=1;i<=num2;i++){
       a=num1*i;
       printf("%d*%d=%d\n",num1,i,a);
    }

    return 0;
}