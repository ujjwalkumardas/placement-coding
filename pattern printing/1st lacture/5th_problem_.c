/*#Problem - 04 (Home Work)
Problem Description: Write 'C' Code to print Full Pyramid Pattern as shown below.
Input Format: N Value
Full Pyramid
Output Format: Sgyere Pattern
Sample Input1: 4 5
Sample Output1:

*/
#include <stdio.h>
int main()
{
    char ch;
    int row;
    int col;
    printf("inter symbol = ");
    scanf("%c", &ch);
    printf("enter row & column = ");
    scanf("%d%d", &row, &col);
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j <= i; j++)
        {
            printf("%c  ", ch + j);
        }
    }
}