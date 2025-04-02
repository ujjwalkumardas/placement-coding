/*using array
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
    char str[20];
    scanf("%[^\n]s",str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            printf("\n");
        }
        else{
            printf("%c",str[i]);
        }i++;
    }
}/*in this program ,space is wastage or required because array is already occupied space ,that is the reason we are use the pointer character */
