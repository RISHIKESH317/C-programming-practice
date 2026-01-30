//Write a loop program to print sum of 6 to 1 

#include <stdio.h>

int main()
{
    int a=6,sum=0;
    
    while(a>=1){
       sum=sum+a;
        a--;
    }
    printf("The result is :%d",sum);


    return 0;
}
