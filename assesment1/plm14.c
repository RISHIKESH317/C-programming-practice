//Get a three-digit number from the user and print the reverse of the number.

#include<stdio.h>

int main()
{
    int a,b,c,d; 
    printf("Enter the value :");
    scanf("%d",&a);
    b=(a%10)*100;
    c=((a/10)%10)*10;
    d=a/100 +b +c;
    printf("The result is :%d",d);
    return 0;
    
} 

