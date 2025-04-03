/*PROBLEM DEFINATION :- write 'c' code that find out the given number is fibonacci number or not
CONSTRAINTS:- limit<=10^9
INPUT FORMAT :- an integer
OUTPUT FORMAT:- fibonacci or not
SAMPLE INPUT :- 21
SAMPLE OUTPUT:- 21 is fibonacci number*/
#include <stdio.h>
#include<math.h>
int perfect_square(int x)
{
    int i = sqrt(x);
    return (i * i == x);
}
int main()
{
    int n;
    int result;
    scanf("%d", &n);
    result = perfect_square((5 * n * n) + 4) || perfect_square((5 * n * n) - 4);
    if (result == 1)
    {
        printf("fibonacci number");
    }
    else
    {
        printf("not a fibonacci number ");
    }
}