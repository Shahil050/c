#include<stdio.h>
#include<conio.h>
int main(){
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100){
            if(year%400){
                printf("%d is a leap year",year);
            
            }else
            printf("%d is not a leap year",year);

        }else
        printf("%d is a leap year",year);
    }else
    printf("%d is leap year",year);
    return 0;

}