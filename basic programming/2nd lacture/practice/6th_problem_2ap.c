/*
APPROACH - 2

PROBLEM DEFINATION :- a trangle number is the one with which a trangle can be formed.write 'c' code that prints the given number ,N is a trangle number or not 
CONSTRAINTS:- N<=10^6
INPUT FORMAT :- an integer 
OUTPUT FORMAT:- yes or no          
SAMPLE OUTPUT :- 10
SAMPLE OUTPUT:- yes*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
int n;
int sum=0;
scanf("%d",&n);
for(int i=1;i<n;i++){

if(i==(-1+sqrt(1+8*n))/2){
    printf("yes");
    exit(0);
}
}
printf("no");
}