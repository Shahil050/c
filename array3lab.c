/*  WAP to add two 3*3 matrix and find their sum and display it  */

#include<stdio.h>
#define n 3
int main(){
    int a[100][100],b[100][100],s[100][100];
    printf("Enter the elements of 1st array\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        } 

    }
    printf("Enter the elements of 2nd array\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        } 
    }
    printf("The sum of array is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            s[i][j]=a[i][j]+b[i][j];
        } 
    }
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",s[i][j]);
        }
    
        printf("\n"); 
    }
    return 0;
}