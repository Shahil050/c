#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("std.dat","w");
	char n[15],ch='y';
	
	int A,C,E,T,P;
	while (ch=='y');
	{
		printf("Enter three subject marks");
		scanf("%d%d%d",&A,&C,&E);
		printf("Enter the name of student");
		scanf("%s",n);
		fprintf(fp,"Name =%s,Physics Marks=%d,Computer Marks =%d,Eng marks=%d,Total =%d,Percent=%d",n,A,C,E,A+C+E,(A+C+E)/3);
		
		printf("\n Do you want to add more record press(y/n)");
		scanf("%c",&ch);
		 
	}
	fclose(fp);		
}
