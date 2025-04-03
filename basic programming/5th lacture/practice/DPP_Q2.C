/* Problem Description:  A number whose proper divisors add upto less than itself is a Deficient Number. Write ‘C’ Code that accepts a Number N as input and find whether it is Deficient or Not.

 Constraints:  N <= 106.
 Input Format:  A Positive Integer
 Output Format:  Prints N is Deficient Number or Not
 Sample Input: 16
 Sample Output: 16 is Deficient Number
 Explanation: 16 proper divisors are 1, 2, 4, 8.
 Sum(1,2,4,8)=15. As 15<16, 16 is a Deficient
 Number.*/
#include <stdio.h>
int main()
{
    int n;
    printf("input is less than 107 and greator than equal to 0");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d + ", i);
            sum = sum + i;
        }
    }
    if (sum < n)
    {
        printf("\n%d id deficient number", n);
    }
    else
        printf("\n%d is not deficient number ", n);
}