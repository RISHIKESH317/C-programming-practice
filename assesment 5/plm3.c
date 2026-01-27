
#include <stdio.h>

int main()
{
  int a=5,sum=0;
  for(int i=1; i<=5; i++){
     sum=sum+a;
      a--;
  }
  printf("The reult is :%d",sum);
    return 0;
}
