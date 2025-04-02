/*PROBLEM DEFINATION :- a perfect number is one ,sum of whose divisiors(excepts itself) equal to the same number.
CONSTRAINTS:- N<=10^6
INPUT FORMAT :-  an integer
OUTPUT FORMAT:- perfect or not perfect
SAMPLE OUTPUT :- 28
SAMPLE OUTPUT:-perfect*/
// extract and print all perfect number upto given 'n'value
#include <stdio.h>
int main()
{
    long long int n;
    long long int i, j, sum;

    scanf("%lld", &n);
    for (j = 1; j <= n; j++)
    {
        sum = 0;
        for (i = 1; i <= j / 2; i++)
        {
            if (j % i == 0)
            {
                sum = sum + i;
            }
        }

        if (sum == j)
        {
            printf("\n%lld", j);
        }
    }
}