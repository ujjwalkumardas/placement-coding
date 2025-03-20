/*PROBLEM DEFINATION :- a perfect number is one ,sum of whose divisiors(excepts itself) equal to the same number.
CONSTRAINTS:- N<=10^6
INPUT FORMAT :-  an integer
OUTPUT FORMAT:- perfect or not perfect
SAMPLE OUTPUT :- 28
SAMPLE OUTPUT:-perfect*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        if (sum == n)
        {
            printf("perfect");
            exit(0);
        }
    }
    printf("not perfect");
}