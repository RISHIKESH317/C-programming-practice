// Get 5 numbers from the user, reverse each number, create a new array, and print the sum of all numbers in the new array.

#include <stdio.h>
int main()
{
    int i,a,b,c=0;
    int x[5],y[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
        b=x[i];
        a=0;
        while(b!=0)
        {
            a*=10;
            a+=b%10;
            b=b/10;
        }
        y[i]=a;
        c=c + y[i];
    }
    printf("%d",c);
}