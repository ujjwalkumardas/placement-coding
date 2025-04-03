/*/*PROBLEM DEFINATION :- write 'c' code that find output the given number is happy or not happy
numder for which the sum of sum of the suuare of the digit eventually equals 1 is a happy number
CONSTRAINTS:- N<=10^9
INPUT FORMAT :- an integer
OUTPUT FORMAT:- happy or not happy
SAMPLE INPUT :-302
SAMPLE OUTPUT:- happy number
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int sum,rem ;
    scanf("%d", &n);
    do
    {
        sum = 0;
        while (n != 0)
        {
             rem = n % 10;
            sum=sum+rem*rem;
            n = n / 10;
        }
        if (sum>= 10)
            n=sum;
    } while (n >= 10);
    if(sum==1){
        printf("HAPPY NUMBER");
    }
    else
    printf("NOT A HAPPY NUMBER");
}