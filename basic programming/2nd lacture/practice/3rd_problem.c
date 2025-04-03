/*problem description :- WRITE 'C' CODE THAT ACCEPTS A STRING STR AS INPUT AND PRINT EACH WORD OF THE STRING IN STEP FORMAT.
constraints :- USE SCANF() FOR INPUT AND PRINTF FOR OUTPUT.
input format :- A STRING .
output format :- GIVEN STRING PRINTED EACH WORD IN A STEP FORMAT .
sample input :- HELLO ALL DEAR STUDENTS .
sample output :-
HELLO
     ALL
        DEAR
            STUDENTS */

#include <stdio.h>
int main()
{
    char *str;
    scanf("%[^\n]s", str);
    int count=0;
    while (*str != '\0')
    {
        if(*str==' '){
            printf("\n");
            for(int i=0;i<count;i++){
                printf(" ");
            }
        }
        printf("%c",*str);
        count++;
        str++;
    }
}