/*PROBLEM DEFINATION :- write 'c' code converts the given binary number system to octal number system.
CONSTRAINTS:-N<=01^9
INPUT FORMAT :- binary value
OUTPUT FORMAT:- equivalent octal value
SAMPLE INPUT :- 00010101
SAMPLE OUTPUT:- 25 */
//process is binary to decimal and decimal to octal 
#include <stdio.h>
#include <math.h>
int main()
{
    long long int n;
    int dec=0,oct=0,rem;
    scanf("%lld",&n);
    int i=0;
    while(n!=0){
        rem=n%10;
        dec=dec+rem*(int)pow(2,i);
        n=n/10;
        i++;
    }
    i=1;
    while(dec!=0){
        rem=dec%8;
        oct=oct+rem*i;
        dec=dec/8;
        i*=10;
    }
    printf("%d",oct);
}
