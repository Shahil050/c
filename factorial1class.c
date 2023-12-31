#include<stdio.h>
int area(int l){
    int sq=l*l;
    return sq;

}
int main(){
    int a,l;
    printf("Enter the length of square:");
    scanf("%d",&l);
    a=area(l);
    printf("The area of square is %d",a);
    return 0;
}