/*PROBLEM DEFINATION :- write 'c' code that calculate the sum of the series 1,1/2,1/3,1/4,....1/n
CONSTRAINTS:- n<10^9
INPUT FORMAT :- an integer ,n
OUTPUT FORMAT:- result of sum of the series
SAMPLE INPUT :- 5
SAMPLE OUTPUT:- 2.283334 */
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    double sum=0.0;
    for(int i=1;i<=n;i++){
sum=sum+(1.0/i);
    }
    printf("%lf",sum);
}