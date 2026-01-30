

#include <stdio.h>

int main()
{
    int a=10,sum=0;
    
    while(a<99){
        if(a%10==5){
      sum=sum+a;
        }
      a++;
}
printf("The result is :%d",sum);

    return 0;
}
