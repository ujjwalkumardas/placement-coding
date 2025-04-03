#include <stdio.h>
int main()
{
    int n, k;
    printf("enter the value of n value = ");
    scanf("%d", &n);
    printf("enter the value of k = ");
    scanf("%d", &k);
    for (int i = n; i >= (-n); i = i - k)
    {
        if(i<0){
            printf("%d",-(i));
        }
        else{
            printf("%d",i);
        }
    }
}