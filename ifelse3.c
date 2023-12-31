// Write a program to enter any number and check if the number is even or odd

#include <stdio.h>
#include<conio.h>
void main()
{
	int num,rem;
	printf("Enter any number ");
	scanf("%d",&num);
	rem=num%2;
	if(rem==0)
	{
		printf("\n%d is even  number",num);
		
	}
	else
	{
		printf("%d is an odd number",num);}
		getch();
		
	}
