// array reverse

#include<stdio.h>
#include<string.h>
int main(){
    int a[100],n;
    printf("Enter number of element:");
    scanf("%d",&n);
    printf("Enter %d array elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Your entered array is:");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\nReverse array is:");
    for(int i=n-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}