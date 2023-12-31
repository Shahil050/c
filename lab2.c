#include<stdio.h>
#include<conio.h>
int main(){
    int a=10,b=4,add,div,mul,sub;
    int mod;
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("\nThe sum is %d",add);
    printf("\nThe subtraction is %d",sub);
    printf("\nThe multiplication is %d",mul);
    printf("\nThe division is %d",div);
    printf("\nThe modulo is %d",mod);
    return 0;
    
}