#include<stdio.h>
#include<conio.h>
int main(){
    int a=10,b=20,c;
    printf("a=%d",a);
    printf("\nb=%d",b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter value swap");
    printf("\na=%d",a);
    printf("\nb=%d",b);
    return 0;
}