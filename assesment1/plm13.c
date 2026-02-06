//Get a two-digit number from the user and print the reverse of the number.

#include<stdio.h>

int main()
{
    int a,b,c; 
    printf("Enter the value :");
    scanf("%d",&a);
    b=a%10;
    c=(b*10)+(a/10);
    printf("The result is :%d",c);
    return 0;
    
} 

