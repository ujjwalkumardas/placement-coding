/*#Problem - 20th
/*PROBLEM DEFINATION :- Problem Description: Write a C program to find the absolute difference between sum of all even numbers and
sum of all odd numbers up to given N value(Excluding N).
CONSTRAINTS:-  N <= 10^9
INPUT FORMAT :- An Integer, N
OUTPUT FORMAT:- Result of difference
SAMPLE INPUT :-  N = 10
SAMPLE OUTPUT:-5
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the number = ");
    scanf("%d",&n);
    int even[19]={0};
    int odd[19]={0};
    int even_sum=0;
    int odd_sum=0;
    int k=0,l=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            even[k]=i;
            even_sum=even_sum+i;
            k++;
        }
        else{
            odd[l]=i;
            odd_sum=odd_sum+i;
            l++;
        }
    }
    for(int i=0;i<k;i++){
        printf(" + %d",even[i]);
    }
    printf(" \nsum of even no = %d",even_sum);
    printf("\n\n");
    for(int j=0;j<l;j++){
        printf("+ %d",odd[j]);
    }
    printf(" \nsum of odd no = %d",odd_sum);

 int diff_e_o;
 diff_e_o= even_sum-odd_sum;
 printf("\n\n difference of sum of even and odd %d",diff_e_o);

}