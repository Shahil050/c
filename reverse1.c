#include<stdio.h>
#include<conio.h>
int main(){
    int n,r,sum=0,z;
    printf("Enter the number:");
    scanf("%d",&n);
    z=n;
    while(n!=0){
        
        r=n%10;
        sum=sum*10+r;
        n=n/10;
        }
        
        printf("%d is the reverse of %d",sum,n);
        
    return 0;
    
}