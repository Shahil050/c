#include<stdio.h>
#include<string.h>
int main(){
    char a[20],b[20],c[20];
    int x,y,z;
    // printf("Enter the first second third number:");
    // scanf("\n%s\n%s\n%s\n\n\n",a,b,c);
    printf("enter first name:");
    scanf("%s",a);
    printf("enter second name:");
    scanf("%s",b);
    printf("enter third name:");
    scanf("%s",c);
    x=strlen(a);
    y=strlen(b);
    z=strlen(c);
    if(x>y&&x>z){
        printf("%s has the greatest length of %d",a,x);
    }
    else if(y>x && y>z){
        printf("%s has the greatest length of %d",b,y);

    }else{printf("%s has the greatest length of %d",c,z);}
    return 0;
}