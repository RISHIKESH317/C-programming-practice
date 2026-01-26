//Get a three-digit number from the user and print the ten's digit.

#include<stdio.h>

int main()
{
    int a,c;
    printf("Enter the value :");
    scanf("%d",&a);
    c =a%10;
    printf("answer :%d",c);
    return 0;
    
    
}