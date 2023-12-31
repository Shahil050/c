/*
E
EN
ENG
ENGI
ENGIN
ENGINE
ENGINEE
ENGINEER
ENGINEERI
ENGINEERIN
ENGINEERING
*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="ENGINEERING";
    int i,j,len;
    len=strlen(str);
    for(i=0;i<len;i++){
     
        for(j=0;j<=i;j++){
             printf("%c",str[j]);
            
        }
       printf("\n");
        
    }
    return 0;
    
}