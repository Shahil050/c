#include<stdio.h>
int matrix(int a[100][100],int m,int n){
    int i,j,b;
    for(i=0;i<m;i++){
        for(j=i+1;j<n;j++){
            b=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=b;

        }
    }
}
int main(){
    int a[100][100],t[100][100],m,n,i,j;
     printf("Enter the rows and column of matrix:");
    scanf("%d%d",&m,&n);
    printf("Enter the %d element of matrix",m*n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Your entered matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is:\n");
    matrix(a,m,n);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");

    }
    return 0;
}