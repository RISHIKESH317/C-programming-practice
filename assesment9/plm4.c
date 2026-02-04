//Get 5 numbers from user and print the big number//

#include<stdio.h>

int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
       scanf("%d",&a[i]); 
    }
    int max;
    max=a[0];
    for(int i=0;i<5;i ++)
    {
        if(a[i+1]>a[i])
        {
            max=a[i+1];
        }
    }
    printf("%d",max);
}