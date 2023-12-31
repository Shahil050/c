#include<stdio.h>
int main()
{
char str[20];
int i,len=0,flag=0;
printf("Enter the string\n");
gets(str);
for(i=0;str[i]!='\0';i++)
{
len++;
}
for(i=0;i<len/2;i++)
{
if(str[i]!=str[len-i-1])
{
flag=1;
break;
}
}
if(flag==1)
{
printf("String is not palindrome");
}
else
{
printf("String is palindrome");
}

return 0;
}