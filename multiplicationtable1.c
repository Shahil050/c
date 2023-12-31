#include <stdio.h>

int main() {
    int a,num;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        a=5*i;
        printf("5*%d=%d\n",i,a);
    }

    return 0;
}