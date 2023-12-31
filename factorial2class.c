#include<stdio.h>
int pal(int a){
    int rem,rev=a,sum=0;
    while(a!=0){
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter the number to check if it is palindrome or not:");
    scanf("%d",&n);
    int sum=pal(n);
    if(n==sum){
        printf("%d is palindrome",n);
    }else
    {printf("%d is not palindrome",n);}
    return 0;

}