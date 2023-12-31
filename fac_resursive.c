#include <stdio.h>
int fac(int);
void main()
{
	int n,f;
	printf("Enter number");
	scanf("%d",&n);
	f=fac(n);
	printf("factorial is %d",f);
}

int fac(int n)
{
	if(n<=1)
	{return 1;
	}
	else{return n*fac(n-1);
	}
}

