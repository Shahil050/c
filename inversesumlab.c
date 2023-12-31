#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float num,x,sum=1;
    printf("Enter x and num:");
    scanf("%f%f",&x,&num);
    for(int i=1;i<num;i++){
        sum=sum+pow(pow(x,i),-1);


    }
    printf("sum=%f",sum);
    return 0;
}