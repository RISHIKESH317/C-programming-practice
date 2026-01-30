/*Write a loop program to print the sum of two-digit
odd numbers, whose ten's digit is 7.*/

#include <stdio.h>

int main()
{
    int a=10,sum=0;
    
    while(a<99){
        if(a%2!=0){
        if(a/10==7){
      sum=sum+a;
        }
        }
      a++;
}
printf("The result is :%d",sum);

    return 0;
}
