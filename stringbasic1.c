// taking input as name from user and displaying it

// finding length of string using strlen function
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    float x;
    char name[20];
    printf("Enter the name:");
    scanf("%s",name);
    printf("You entered the name : %s",name);
    // using strlen function

    x=strlen(name);
    printf("\n\n\nThe length of given string is %f",x);

    return 0;
}