#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("Enter the Number of elements");
    scanf("%d",&n);
    ptr=malloc(sizeof(int));
    if(ptr!=NULL){
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));

    }}
    for(int i=0; i<n;i++){
        printf("%d ",&ptr+i);
    }
}