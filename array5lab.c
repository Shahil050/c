/* WAP to input m*n order matrix and find it`s transpose*/
#include<stdio.h>
int main(){
    int a[100][200],m,n;
    printf("Enter the number of rows and column of matrix:\n");
    scanf("%d %d",&m,&n);
    printf("Enter %d elements:\n",m*n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Your entered matrix is \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of given matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",a[j][i]);
        }
        printf("\n");
    }


    return 0;
}