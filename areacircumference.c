#include<stdio.h>
// #include<conio.h>
#define pi 3.14
#include<math.h>
int main(){
    float area,circumference,r;
    printf("Enter the area:");
    scanf("%f",&r);
    circumference=2*pi*r;
    area=pi*pow(r,2);
    printf("The circumference is: %f\n",circumference);
    printf("Area is %f",area);
    return 0;
}