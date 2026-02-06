//Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use "if".
#include<stdio.h>

int main()
{
    int a,b; 
    printf("Enter the value :");
    scanf("%d",&a);
    b= a -5* (a%2);
    printf("The result is :%d",b);
    return 0;
    
} 

