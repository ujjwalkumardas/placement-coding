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
            printf("\n%d",n1);
        }

    }
}