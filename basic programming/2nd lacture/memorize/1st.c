#include<stdio.h>
#include<string.h>
int main(){
    int a,b,c,sum=0;
    char arr[20];
    fgets(arr,10,stdin);
    sscanf(arr,"%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("%d",sum);
    for(int i=0;i<10;i++){
        printf("\n%d\n",arr[i]);

    }}
