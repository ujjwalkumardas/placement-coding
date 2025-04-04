/*#Problem - 04 (Home Work)
Problem Description: Write 'C' Code to print Full Pyramid Pattern as shown below.
Input Format: N Value
Output Format: Full Pyramid
Sample Input 1: 6
Sample Output 1:

     1
    1 1
   1 1 1
  1 1 1 1
 1 1 1 1 1
1 1 1 1 1 1

*/
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    for (int i = 1; i <= 6; i++)
    {
        for (int k = 6; k> i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
}