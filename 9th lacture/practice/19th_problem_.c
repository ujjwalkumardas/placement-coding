/*PROBLEM DEFINATION :-  Write a C program for given two numbers N and K, our task is to subtract a number K
from N until number(N) is greater than zero, once the N becomes negative or zero then we start adding K
until that number become the original number(N).

CONSTRAINTS:- n<10^9 and k<10^3
INPUT FORMAT :- integer
OUTPUT FORMAT:-result sum of the series
SAMPLE INPUT :- N=15,K=5
SAMPLE OUTPUT:- 15 10 5 0 5 10 15
-----------------------------------------*/
#include <stdio.h>
int main()
{
    int n, k;
    printf("enter the value of n value = ");
    scanf("%d", &n);
    printf("enter the value of k = ");
    scanf("%d", &k);
    for (int i = n; i >= (-n); i = i - k)
    {
        if(i<0){
            printf(", %d",-(i));
        }
        else{
            printf(", %d",i);
        }
    }
}