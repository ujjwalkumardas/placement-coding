/*
PROBLEM DEFINATION :- write c code that accepts a string str as input and print each word of the string in new line 
CONSTRAINTS:- use scanf()for input and printf for output .
INPUT FORMAT :- a string 
OUTPUT FORMAT:- given string printed each word in next line.
SAMPLE OUTPUT :- hello all dear students.
SAMPLE OUTPUT:-  
           hello
           all
           dear
           students.  */

#include<stdio.h>
int main(){
    char *str;
    scanf("%[^\n]s",str);
    while(*str!='\0'){
        if(*str==' '){
            printf("\n");
        }
        else
        printf("%c",*str);
        str++;
    }
}