#include<stdio.h>
#include<conio.h>
int main(){
    int n1=50,n2=13,x,y,z,left,right;
    x=n1&n2;
    y=n1|n2;
    z=n1^n2;
    left  = n1<<n2;
    right=n1>>n2;
    printf("AND=%d\n",x);
    printf("OR=%d\n",y);
    printf("XOR=%d\n",z);
    printf("Value after right shift=%d\n",right);
    printf("Value after left shift=%d\n",left);
    getch();
    return 0;

}