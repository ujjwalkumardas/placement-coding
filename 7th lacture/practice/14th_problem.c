/*PROBLEM DEFINATION :- write 'c' code converts the given decimal number system to hexa decima number system and print

CONSTRAINTS:-N<=65535
INPUT FORMAT :- an integer ,N
OUTPUT FORMAT:- hexa decima value
SAMPLE INPUT :- 120
SAMPLE OUTPUT:- 78*/

#include <stdio.h>
int main()
{
    int n;
    int stor[16] = {0};

    printf("enter the decimal number  = ");
    scanf("%d", &n);
    int i = 0;
    while (n != 0)
    {
        int rem = n % 16;
        n = n / 16;
        stor[i] = rem;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        if (stor[j]>=10)
        {
            if (stor[j] == 10)
            {
                printf("A");
            }
            if (stor[j] == 11)
            {
                printf("B");
            }
            if (stor[j] == 12)
            {
                printf("C");
            }
            if (stor[j] == 13)
            {
                printf("D");
            }
            if (stor[j] == 14)
            {
                printf("E");
            }
            if (stor[j] == 15)
            {
                printf("F");
            }}
            else
                printf("%d", stor[j]);
        
    }
}