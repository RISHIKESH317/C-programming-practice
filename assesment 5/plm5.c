//Write a loop program to print odd number of 1 to 9

#include <stdio.h>

int main()
{
  int a=1;
  for(int i=1; i<=9; i++){
     if(a%2!=0){
         printf("%d\n",a);
     }
      a++;
  }

    return 0;
}
