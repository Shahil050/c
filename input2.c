#include<stdio.h>
#include<conio.h>
int main(){
    char name[20];
    int rollno;
    float msub1,msub2,msub3,msub4,msub5,msum,score;
    printf("Enter the name of student:");
    scanf("%[^\n]",name);
    printf("Enter the Roll no:");
    scanf("%d",&rollno);
    printf("Enter Marks of 5 subject\n");
    scanf("%f%f%f%f%f",&msub1,&msub2,&msub3,&msub4,&msub5);
    msum=msub1+msub2+msub3+msub4+msub5;
    score = msum/500*100;
    printf("\nName of student: %s",name);
    printf("\nRoll_no:%d",rollno);
    printf("\nPercentage Score Secured:%2.2f%c",score,'%');
    
    return 0;
}
