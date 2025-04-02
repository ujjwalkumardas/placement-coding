/*PROBLEM DEFINATION :- a plaindrome number is one ,recursive of which is equal to the same number.
write 'c' code that prints the all plaindromes up to given limit
CONSTRAINTS:- limit<=10^9
INPUT FORMAT :- an integer ,limit
OUTPUT FORMAT:- all plaindromes seperated by comma
SAMPLE INPUT :- 100
SAMPLE OUTPUT:-0,1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99*/
#include <stdio.h>
int main()
{
    int n;
    int i, ri, num, n1;
    scanf("%d", &n);
    printf("0");
    for (i = 1; i <= n; i++)
    {
        num = i;
        n1 = 0;
        while (num != 0)
        {
            ri = num % 10;
            n1 = n1 * 10 + ri;
            num = num / 10;
        }
        if (i == n1)
        {
            printf("\n%d", i);
        }
    }
}