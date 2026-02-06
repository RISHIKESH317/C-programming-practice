//Get a four-digit number from user and only reverse the first two digits of the number, then print the number.

#include<stdio.h>

int main()
{
    int a,b,c,d; 
    printf("Enter the value :");
    scanf("%d",&a);
    b=(a%10)*10;
    c=b+(a/10)%10;
    d=(a/100)*100;
    d=d+c;
    printf("The result is :%d",d);
    return 0;
    
} 

