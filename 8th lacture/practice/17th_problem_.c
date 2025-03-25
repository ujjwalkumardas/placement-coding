/*PROBLEM DEFINATION :- wite 'c' code that converts the given binary code to gray code. 

INPUT FORMAT :- binary  
OUTPUT FORMAT:- gray code 
SAMPLE INPUT :-  1100
SAMPLE OUTPUT:-1010   */
#include<stdio.h>
int main(){
    int bit;
    scanf("%d",&bit);
    int binary[bit];
    int gray[bit];
    for(int i=0;i<bit;i++){
        int n;
        scanf("%d",&n);
        binary[i]=n;

    }
  gray[0]=binary[0];
  int graydata;
    for(int i=1;i<bit;i++){
        graydata=binary[i-1]^binary[i];
        gray[i]=graydata;
    }
    for(int i=0;i<bit;i++){
    printf("%d",gray[i]);}
}