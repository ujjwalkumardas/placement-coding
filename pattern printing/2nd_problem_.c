/*#Problem - 02
Problem Description: Write 'C' Code to print Square Pattern as given below.
Input Format: N Value, Character
Output Format: Square Pattern
Sample Input 1: 5, 1
Sample Output 1:
*/
#include<stdio.h>
int main(){
    char ch;
    int row;
    int col;
    printf("inter symbol = ");
    scanf("%c",&ch);
    printf("enter row & column = ");
    scanf("%d%d",&row,&col);
    for(int i=0;i<row;i++){
        printf("\n");
        for(int j=0;j<col;j++){
            printf("%c  ",ch+j);
        }
    }
}


