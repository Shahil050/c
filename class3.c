#include<stdio.h>
void main(){
    float f[]={10.5,1.5,2.5,3.5,4.5};
    float *p,*a,*q;
    p=f;
    q=p+4;
    a=&f[2];
    printf("%f\t%f\t%f",*p,*q,*p-*q);
}
