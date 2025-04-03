/*#Problem - 01
Problem Description: Write 'C' Code to print Square Pattern with given character.
Input Format: N Value, Character
Output Format: Square Pattern
Sample Input 1: 4 1
Sample Output 1:
1  1  1  1
1  1  1  1
1  1  1  1
1  1  1  1

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
    for(int i=1;i<=row;i++){
        printf("\n");
        for(int j=1;j<=col;j++){
            printf("%c  ",ch);
        }
    }
}


