//Write a program to get a number from user and print the sum of all digits.

#include <stdio.h>
int main (){
    int a,b,sum=0;
    printf("Enter the niumber :");
    scanf("%d",&a);
    loop :if(a!=0){
        b=a%10;
        sum=sum+b;
        a/=10;
        goto loop;
    }
   printf("the result is :%d",sum);
    
    return 0;
}