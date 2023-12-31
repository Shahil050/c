#include<stdio.h>

struct date
{
int dd;
int mm;
int yy;
};
struct book
{
char name[20];
float price;
char author[20];
struct date d;
};
int main()
{
int i;
struct book b[3];
for(i=0;i<3;i++)
{
printf("Enter the information of book %d\n",i+1);
printf("Enter the book name");
gets(b[i].name);
printf("Enter the author name");
gets(b[i].author);
printf("Enter the book price");
scanf("%f",&b[i].price);
printf("Enter book published year");
scanf("%d",&b[i].d.yy);
printf("Enter book published month");
scanf("%d",&b[i].d.mm);
printf("Enter book published date");
scanf("%d",&b[i].d.dd);
}
printf("\nInformation of Books having price greater than 250 are\n");
printf("\nName\tPrice\tAuthor\tPublished date");
for(i=0;i<3;i++)
{
if(b[i].price>250)
{
printf("\n%s\t%f\t%s\t%d\t%d\t%d",b[i].name,b[i].price,b[i].author,b[i].d.dd,b[i].d.mm,
b[i].d.yy);
}
}

return 0;
}