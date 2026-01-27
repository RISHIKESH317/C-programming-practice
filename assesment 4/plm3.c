//Write a loop program to print sum of 1 to 5

#include <stdio.h>
int main (){
    int a=1,sum=0;
    loop :if(a<=5){
        sum =sum+a;
        a++;
        goto loop;
    }
     printf("%d",sum);
    
    return 0;
}