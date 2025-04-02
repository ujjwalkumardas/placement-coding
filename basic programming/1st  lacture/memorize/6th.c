#include<stdio.h>
int main(){
    char *str;
    scanf("%[^x]s",str);
    printf("%s",str);
}/*[^(xor)] xor is a excluding character  */
/*[^x]= xor is saying (x ko chor kr sab element )
//x is terminating character.
//only one character i want to exclude
//example:-
[^(a-z)]
[^(A-Z)]
[^(a)^(@)^(%)^(*)]
recuring any element we can exclude with the help of xor
*/
