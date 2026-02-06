//Get a three-digit number from the user and print the sum of the digits.

#include<stdio.h>

int main()
{
    int a,b,x,c,d; 
    printf("Enter the value :");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=a/100;
    x=b+c+d;
    printf("The answer is :%d",x);
    return 0;
    
    
} 

