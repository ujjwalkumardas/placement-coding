/*#Problem - 05
Problem Description: Write 'C' Code to print Inverted half pyramid pattern as given below.
Input Format: N Value
Output Format: Pattern as below
Sample Input : 6
Sample Output :
******
*****
****
***
**
*

*/
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    for(int i=1;i<=6;i++){
        for(int j=6;j>i;j--){
            printf("%c",ch);
        }
        printf("\n");
    }
}