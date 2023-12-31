#include<stdio.h>
#include<string.h>
int main(){
    char name[20],name1[20];
    printf("Enter a name:");
    getc(name);
    strcpy(name1,name);
    strrev(name);
    if(strcmp(name,name1)==0){
        printf("The given string is palindrome");
    }else{
        printf("The given number is not palindrome ");
    }
    return 0;
}