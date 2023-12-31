#include<stdio.h>
int f(int);
void main()
{
	int n,a=0,b=1;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("%d \n%d",a,b);
	f(n-2);
	
}
int f(int n)
{
	static int a=0,b=1,c;
	if(n>0){
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
		f(n-1);
	}
	}
