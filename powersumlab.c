#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int num,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        sum=sum+pow(i,2);

    }
    printf("Sum=%d",sum);
    return 0;
}