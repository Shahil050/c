// Using Do while loop

// accept nbr till user want
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	char ch='y';
	do
	{
		printf("Enter a number: ");
		scanf("%d",&n);
		printf("\nDo you want to continue: ");
		scanf("%c",&ch);
	
	}
	while(ch=='y');
	getch();
}
