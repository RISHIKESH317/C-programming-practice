/*Write a program to print biggest 4-digit number
which is divisible by 7 and 9.*/

#include <stdio.h>

int main() {
    int a, sum,b,c=0;

 
   for(int i=1; i<100000; i++){
       sum=0;
       for(int x=i; x!=0; x/=10){
           sum=sum+(x%10);
       }
       if(sum==14){
           c++;
       }
       printf("The result is %d", c);
   }

    
    return 0;
}
