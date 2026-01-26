//Get a two-digit number from the user and print the sum of the digits.

#include<stdio.h>

int main()
{
    int a,b,x,c; 
    printf("Enter the value :");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    x=b+c;
    printf("The answer is :%d",x);
    return 0;
    
    
} 