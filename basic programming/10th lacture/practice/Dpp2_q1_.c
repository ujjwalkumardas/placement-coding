/*
#Problem - 1
*PROBLEM DEFINATION :-  Write 'C' Code that Converts the given Hexa Decimal Integer to Octal Integer
CONSTRAINTS:-  Without Using Format Specifier
INPUT FORMAT :-  Hexa Decimal Integer
OUTPUT FORMAT:- Equivalent Octal Value
SAMPLE INPUT :- 1AE3
SAMPLE OUTPUT:-
15343
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char hex[16];
    scanf("%s", hex);
    int i, j = 0, sum = 0;
    int len = strlen(hex);
    for (i = len - 1; i >= 0; i--)
    {
        if ((hex[i] >= 'A') && (hex[i] <= 'F'))
        {
            hex[i] = hex[i] - 55;
        }
        else if (((hex[i] >= 'a') && (hex[i] <= 'f')))
        {
            hex[i] = hex[i] - 87;
        }
        else
        {
            hex[i] = hex[i] - 48;
        }

        sum = sum + hex[i] * pow(16, j);
        j++;
    }
    printf("%d", sum);
    printf("\n");
    int octa[16]={0};
    int k=0;
    while(sum!=0){
        int rem=sum%8;
        octa[k]=rem;
        sum=sum/8;
        k++;
    }
    printf("octal value = ");
    for(int i=k-1;i>=0;i--){
        printf("%d",octa[i]);
    }
}
