/*PROBLEM DEFINATION :- write 'c' code converts the given decimal number system to octal number system and print the same in 16-bit form.

CONSTRAINTS:-N<=10^9
INPUT FORMAT :- an integer ,N
OUTPUT FORMAT:- octal value 
SAMPLE INPUT :- 120 
SAMPLE OUTPUT:- 0000,0000,0111,1000
*/
#include<stdio.h>
int main(){
    int n;
    int stor[16]={0};
    printf("enter the decimal number  = ");
    scanf("%d",&n);
    int i=0;
    while(n!=0){
        int rem =n%8;
        n=n/8;
        stor[i]=rem;
        i++;

    }
    for(int i=15;i>=0;i--){
        printf("%d",stor[i]);
    }
}