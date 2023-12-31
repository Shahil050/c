#include<stdio.h>
#include<conio.h>
int add(int i,int j){
    int sum;
    sum = i+j;
    return sum;
}
int main(){
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    c=add(a,b);
    printf("The sum is %d",c);


    return 0;
}