#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("%d is a composite number",n);
            break;
        }else
        printf("%d is a prime number",n);
        break;
    }
    return 0;
}