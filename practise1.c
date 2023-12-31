#include<stdio.h>

#include<stdlib.h>
int main()
{
char name[20];
char choice;
int age;
float height;
FILE *fptr;
fptr=fopen("hello.txt","w+");
if(fptr==NULL)
{
printf("Unable to open file");
exit(1);
}
do
{
printf("Enter the name");
scanf("%s",name);
printf("Enter the age");
scanf("%d",&age);
printf("Enter the height") ;
scanf("%f",&height);
printf("Do you want to continue?");
scanf("%c",&choice);
fprintf(fptr,"%s\t%d\t%f\n",name,age,height);
}while(choice=='Y'||choice=='y');
rewind(fptr);
printf("\nName\tAge\tHeight");
while(fscanf(fptr,"%s%d%f",name,&age,&height)!=EOF)
{
printf("\n%s\t%d\t%f",name,age,height);
}
fclose(fptr);

return 0;
}