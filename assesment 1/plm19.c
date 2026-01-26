//Get a three-digit number from the user, make the one's digit 2 then print it.

#include<stdio.h>

int main()
{
    int a,b; 
    printf("Enter the value :");
    scanf("%d",&a);
    a/=10;
    b=a*10;
    a=b+2;
    printf("The result is :%d",a);
    return 0;
    
} 

