/* WAP to read n numbers in array find the largest number among them*/
#include<stdio.h>
int main(){
    int a[100],n,g;
    printf("Enter the numbers of array:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    g=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>g){
            g=a[i];
        }
    }
    printf("%d is the greatest number",g);

    return 0;
}