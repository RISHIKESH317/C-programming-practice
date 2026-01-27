//Write a loop program to print sum of 6 to 1

#include <stdio.h>

int main()
{
  int a=6,sum=0;
  for(int i=1; i<=6; i++){
     sum=sum+a;
      a--;
  }
  printf("The reult is :%d",sum);
    return 0;
}
