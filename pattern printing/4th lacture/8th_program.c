/*#Problem - 8
Problem Description: Write 'C' Code to print the below Pattern
Input Format: Odd N Value
Output Format: Pattern as below
Sample Input : 5
Sample Outpat :
1 0 0 0 1
1 0  0  1
1   0   1
1 0   0 1
1 0 0 0 1
*/
#include <stdio.h>
int main()
{
    for (int i = 0; i <=4; i++)
    {
        for (int j = 0; j <=4; j++)
        {
            if (i == 0 || i == 5)
            {
                if (j == 0 || j == 5)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            else if (i == 1 || i == 3)
            {
                if (j == 0 || j == 5)
                {
                    printf("1");
                }
                else if (j == 1 || j == 3)
                {
                    printf("0");
                }
                else {
                    printf(" ");
                }
            }

            else if (i == 2 )
            {
                if (j == 0 || j == 5)
                {
                    printf("1");
                }
                else if ( j == 2)
                {
                    printf("0");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
