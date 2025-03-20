/*PROBLEM DEFINATION :-a mersenne prime is a mersenne number ,i.e. a number of the from Mn=2^n -1 that is prime in order for Mn to be prime n must itself be prime .
write 'c' code that prints the all mersenne prime no up to given number.
CONSTRAINTS:- Mn<=10^12,N<=100
INPUT FORMAT :- an integer,N
OUTPUT FORMAT:- all mersenne prime number seperated by comma
SAMPLE INTPUT :-10
SAMPLE OUTPUT:-3,7,31,127*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int i, k, value, count;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        count = 0;
        for (int k = 2; k <= i / 2; k++)
        {
            if (i % k == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            value = pow(2, i) - 1;
        }
        for (int j = 2; j<= value / 2; j++)
        {
            if (value % j== 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("\n%d", value);
        }
    }
}