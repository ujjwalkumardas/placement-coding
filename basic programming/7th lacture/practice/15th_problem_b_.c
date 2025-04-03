/*PROBLEM DEFINATION :- write 'c' code converts the given octal number system to  decima number system without using format specifier and pow() function.
CONSTRAINTS:-N<=01^9
INPUT FORMAT :- an integer ,N(octal)
OUTPUT FORMAT:- decima value
SAMPLE INPUT :- 27
SAMPLE OUTPUT:- 23 */
#include <stdio.h>
int power(int x)
{
    int result = 1;
    if (x == 0)
        return 1;
    else
    {
        while (x > 0)
        {
            result = result * 8;
            x--;
        }
        return result;
    }
}
int main()
{
    int n;
    int rem;
    int sum = 0;
    int i = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem * power(i);
        n = n / 10;
        i++;
    }
    printf("Decimal equivalent: %d\n", sum);
}