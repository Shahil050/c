 /* Write a program to calculate add,su,mu,and div */
#include <stdio.h>

int main()
{
    int x,y,z,s,m,d;
     printf("Enter the First Number ");
     scanf("%d",&x);
     printf("Enter the Second Number");
    scanf("%d",&y);
    z=x+y;
    s=x-y;
    m=x*y;
    d=x/y;
    printf("The sum of %d and %d is = %d",x,y,z);
    printf("\nThe Subtraction of %d and %d is = %d",x,y,s);
    printf("\nThe product of %d and %d is = %d",x,y,m);
    printf("\nThe division of %d and %d is = %d",x,y,d);
    return 0;

}