/*Write a program to print biggest 4-digit number
which is divisible by 7 and 9.*/

#include<stdio.h>

int main()
{
    int a=9999;
    while(a>1000)
    {
        if(a%7==0 && a%9==0)
        {
            printf("%d",a);
            return 0;
        }
        a--;
    }
}