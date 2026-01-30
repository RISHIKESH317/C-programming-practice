//Write a program print total number of single digit Prime numbers

#include<stdio.h>

int main()
{
    int n=0;
    int i=2;
    while(i<10)
    {
        int f=0;
        int j=2;
        while (j<=i/2)
        {
            if(i%j==0)
            f++;
            j++;
        } 
        if(f==0) 
        {
            n++;
        }
        i++;
    }
printf("%d",n);
}