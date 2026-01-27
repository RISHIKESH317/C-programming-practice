//Get a two-digit number from user and subtract 5 from that number  if the sum of the digits of the number is odd  
//then print the result. Do not use "if"d  
  

#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter the number :");
    scanf("%d",&a);
    sum = (a%10)+(a/10);
    b = a-5 *(sum%2);
    printf("The result is :%d",b);
    return 0;
}