//Get a four-digit number from user and only reverse the last two digits of the number, then print the number.

#include<stdio.h>

int main()
{
    int a,b,c,d; 
    printf("Enter the value :");
    scanf("%d",&a);
    b=a/100;
    c=(b%10)*10;
    d=c+(b/10);
    a%=100;
    d=(d*100)+a;
    printf("The result is :%d",d);
    return 0;
    
} 

