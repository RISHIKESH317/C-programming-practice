//Write a loop program to print the two-digit even numbers, who's sum of digits are 6.

#include <stdio.h>
int main (){
    int a=11;
    loop :if(a<99){
        if(a%2==0){
         
          if((a%10)+(a/10)==6){
               printf("%d\n",a);
          }
        }
         a++;
        goto loop;
    }
   
    
    return 0;
}