//Write a program to accept name and address and display them

#include<stdio.h>
#include<conio.h>
void main()
{
	char n[10],a[15];
	printf("Enter your name ");
	scanf("%s",n);
	printf("Enter your address ");
	scanf("%s",a);
	printf("Your name is %s ",n);
	printf("\nYour address is %s ",a);
	getch();
	
}
