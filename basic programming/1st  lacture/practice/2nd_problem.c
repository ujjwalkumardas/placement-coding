/*PROBLEM DESCRIPTION :- write c code that accepts a string str as input and print each word of the string except the last character.
CONSTRAINTS:- use scanf() for input and printf()for output.
INPUT FORMAT :- A string
OUT FORMAT :-give string printed each word except the last character.
SAMPLE INPUT :- hello all dear students
SAMPLE OUTPUT :- hell al dea student */
#include <stdio.h>
int main()
{
    char *str;
    scanf("%[^\n]s", str);
    while (*str != '\0')
    {
        if( (*(str + 1) != ' ')
            &&((*str + 1) != '\0'))
            {
                printf("%c", *str);
            }
        str++;
    }
}