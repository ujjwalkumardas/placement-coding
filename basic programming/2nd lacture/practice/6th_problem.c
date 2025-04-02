/*
APPROACH - 1

PROBLEM DEFINATION :- a trangle number is the one with which a trangle can be formed.write 'c' code that prints the given number ,N is a trangle number or not 
CONSTRAINTS:- N<=10^6
INPUT FORMAT :- an integer 
OUTPUT FORMAT:- yes or no          
SAMPLE OUTPUT :- 10
SAMPLE OUTPUT:- yes*/
#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
int sum=0;
scanf("%d",&n);
for(int i=1;i<n;i++){
sum=sum+i;
if(sum==n){
    printf("yes");
    exit(0);
}
}
printf("no");
}