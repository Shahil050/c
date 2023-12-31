#include<stdio.h>
struct employee
{
    int id;
    char n[3];
    float s;
};
struct employee e[3];
void main()
{
    int i;
    printf("Enter id name and salary ");
    for(i=0;i<3;i++)
    {
        scanf("%d %s %f",&e[i].id,e[i].n,&e[i].s);
    }
    for(i=0;i<3;i++)
    {
        printf("%d %s %f\n",e[i].id,e[i].n,e[i].s);
    }
}