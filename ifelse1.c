// Write a program to enter any number and check if the number is exactly divisible by 5 and 6 or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter any number ");
	scanf("%d",&num);
	if(num%5==0 && num%6==0)
	{
		printf("%d is exactely divisible by 5 and 6",num);
	
	
}
else
{
	printf("%d is not exactely divisible by 5 and 6",num);
}
getch();
}
