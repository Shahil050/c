 // Using While loop
 // WAP a program to accept the number till the user want
//
#include<stdio.h>

int main()
{
	int n;
	char ch='y';
	while (ch == 'y')
	{
		printf("Enter a number: ");
		scanf("%d",&n);
		printf("\nDo you want to continue: ");
		scanf("%c",&ch);
	}
	return 0;
	
}
