//Write a loop program to print sum of 1 to 5 

#include <stdio.h>

int main()
{
    int a=1,sum=0;
    
    while(a<=5){
       sum=sum+a;
        a++;
    }
    printf("The result is :%d",sum);


    return 0;
}
