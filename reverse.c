//Wap to reverse the string 
#include <stdio.h>
#include<string.h>
void main()
{
	char s[20];
	printf("Enter a word ");
	scanf("%s",s);
	strrev(s);
	printf("The reverse string is %s",s);
	getch();
}
