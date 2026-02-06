//Get a two-digit number from the user, make the one's digit 1 then print it.

#include<stdio.h>

int main()
{
    int a; 
    printf("Enter the value :");
    scanf("%d",&a);
    a%=10;
    a=10+a;
    printf("The result is :%d",a);
    return 0;
    
} 

