#include<stdio.h>
void main(){
    int arr[]={10,20,30,45,67,58,74};
    int *i,*j;
    i=&arr[1];
    j=&arr[5];
    printf("%ld\n%d\n",j-i,*j-*i);

}