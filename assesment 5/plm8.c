//Write a loop program to print the two-digit even numbers, who's sum of digits are 6.


#include <stdio.h>

int main()
{
  int a=10;
  for(int i=1; i<=99; i++){
      if((a%10)+(a/10)==6){
          
     if(a%2==0){
         printf("%d\n",a);
     }
     
  }
   a++;
  }

    return 0;
}
