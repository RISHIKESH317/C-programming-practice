/*Write a loop program to print the two-digit odd numbers,
who's sum of digits are 7.*/

#include <stdio.h>

int main()
{
    int a=11;
    
    while(a<99){
      if(a%2!=0){
          if((a%10)+(a/10)==7){
       printf("%d\n",a);
       
    }
      }
     a++;
    }


    return 0;
}
