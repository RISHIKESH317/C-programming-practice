/*Add two integer arrays of up to 50 digits and
store the result in a 51-digit array.*/
#include<stdio.h>
int main()
{
    int a[50]={2,4,6},b[50]={3,5,7},c[51];
    for(int i=49;i>=0;i--)
    {
        c[i]=a[i]+b[i];
    }
    for(int i=0;i<50;i++)
    {
        printf("%d",c[i]);
        if(c[i]==0)
        {
            break;
        }
    }
}