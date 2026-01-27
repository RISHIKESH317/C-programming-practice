//Write a loop program to print two digit odd number below 20

#include <stdio.h>

int main()
{
  int a=10;
  for(int i=1; i<=10; i++){
     if(a%2!=0){
         printf("%d\n",a);
     }
      a++;
  }

    return 0;
}
