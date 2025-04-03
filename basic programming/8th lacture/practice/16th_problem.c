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
    int bit;
    printf("how many bit print there ");
    scanf("%d",&bit);
    int arr[bit];
    int decimal = 0;
   
   for(int i=0;i<bit;i++){
    printf("\nenter the the bit no %d  = ",i+1);
    int n;
    scanf("%d",&n);
    arr[i]=n;
   }
   //binary to decimal 
for(int n=bit-1;n>=0;n--){
    decimal=decimal+arr[n]*(int)pow(2,n);
}

printf("\nentered binary digits = ");
   for(int i=0;i<bit;i++){
    printf("%d",arr[i]);
   }
   printf(" \ndecimal = %d",decimal);
   /* decimal to binary*/
   int octal[100]={0};
   int i=0;
   while(decimal!=0){
    int rem=decimal%8;
    octal[i]=rem;
    decimal=decimal/8;
    i++;
   }
   printf("\n");
   for(int j=i-1;j>=0;j--){
    printf("%d",octal[j]);
   }

}