/*PROBLEM DEFINATION :- write 'c' code that find out the given number is fibonacci number or not
CONSTRAINTS:- limit<=10^9
INPUT FORMAT :- an integer
OUTPUT FORMAT:- fibonacci or not
SAMPLE INPUT :- 21
SAMPLE OUTPUT:- 21 is fibonacci number*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int s1t = 0, nd2 = 1, hol=0;
    int status = 0;
    scanf("%d", &n);
    while (hol <= n)
    {
        hol = s1t + nd2;
        if (hol == n)
        {
            printf("fibonacci number");
            status = 1;
            exit(0);
        }
        s1t = nd2;
        nd2 = hol;
    }
    if (status == 0)
    {
        printf("not a pibonacci number");
    }
}
