//finding factorial of any number using function
#include<stdio.h>
#include<conio.h>
int fac(int x)
{
    if(x==0)
    return 1;
    else
    return x*fac(x-1);
}
void main()
{
    int a,b;
    printf("enter any number:");
    scanf("%d",&b);
	a=fac(b);
    printf("factorial is %d",a);
}
