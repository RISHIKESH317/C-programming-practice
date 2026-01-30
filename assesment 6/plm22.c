/*Write a program get number from user print the total 
number of two-digit odd numbers in the number.*/

#include<stdio.h>

int main()
{
   int a,b,c=0;
   printf("Enter the number :");
   scanf("%d",&a);
   b=a;
   while(b>=10){
      int d= b % 100;        
       if(d % 2 != 0){  
           c++;
       }
       b /= 10;         
   }
   printf("%d",c);

   return 0;
}
