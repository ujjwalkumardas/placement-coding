/* Problem Description:  Write ‘C’ Code that accepts a string str as input and print each word of the string in Reverse.
 Constraints:  Use scanf() for input and printf() for
 output.
 Input Format:  A String
 Output Format:  Given String Printed Each
 Word in Reverse
 Sample Input: Helo Al Dear Students
 Sample Output:
 oleh llA reaD stnedutS*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%[^\n]s", str);
    int len = strlen(str);
    int start = 0;
    for (int i = 0; i <= len; i++)
    {
        if ((str[i]) == ' ' || (str[i]) == '\0')
        {
            for (int j = (i - 1); j >= start; j--)
            {
                printf("%c", str[j]);
            }
            start = i + 1;
            if (str[i] == ' ')
                printf(" ");
        }
    }
}