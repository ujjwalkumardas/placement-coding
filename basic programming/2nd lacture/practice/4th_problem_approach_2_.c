/*
               {APPROACH -2}

PROBLEM DEFINATION :- write a 'c' code that calculates sum of the 3 given numbers with input enteredin one line seperated by comma.
CONSTRAINTS:- input must be entered in single line seperated by comma .
INPUT FORMAT :- 3 integer seperated by comma 
OUTPUT FORMAT:- result sum 
SAMPLE OUTPUT :- 7, 5, 4 
SAMPLE OUTPUT:- 16 */
#include<stdio.h>
int main(){
    char arr[20];
    int a,b,c,sum=0;
    fgets(arr,20,stdin);
    sscanf(arr,"%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("%d",sum);
}