/*
{APPROACH- 2}
PROBLEM DEFINATION :- write 'c' code that prints the given number is even or odd without using conditional statement 
CONSTRAINTS:- use scanf() for input and printf() for output no conditional statement to be used
INPUT FORMAT :- an integer
OUTPUT FORMAT:- prints even or odd message 
SAMPLE OUTPUT :- 7
SAMPLE OUTPUT:-odd*/
//(without using % operator)
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    (n&1)?printf("odd"):printf("even");
    
}