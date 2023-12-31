/* WAP to input m*n matrix and display it  */
#include<stdio.h>
#include<string.h>
int main(){
    int a[100][200],n,m;
    printf("Enter rows and column:");
    scanf("%d%d",&m,&n);
    printf("Enter %d number of element:\n",m*n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        } 
    }
    printf("your entered matrix is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}