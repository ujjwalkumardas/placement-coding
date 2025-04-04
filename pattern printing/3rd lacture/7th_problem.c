/*#Problem - 07 
Problem Description: Write 'C' Code to print Mirrored Arrow Shaped pattern as given below.
Input Format: Odd N Value
Output Format: Pattern as below
Sample Input : 5
Sample Output= 
    *
   **
  ***
 ****
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
        for(int k=6;k>i;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c",ch);
        }
        
        printf("\n");
    }
    for(int i=1;i<=5;i++){
        for(int k=1;k<=i;k++){
            printf(" ");
        }
        for(int j=6;j>i;j--){
            printf("%c",ch);
        }
        
        printf("\n");
    }

}