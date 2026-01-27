//Get a number from user and subtract 5 from that number if the number ten's position is odd, then print the result. Do not use "if".


#include<stdio.h>

int main()
{
    int a,b,c; 
    printf("Enter the value :");
    scanf("%d",&a);
    b=(a/10)%10;
    c= a -5* (b%2);
    printf("The result is :%d",c);
    return 0;
    
} 

