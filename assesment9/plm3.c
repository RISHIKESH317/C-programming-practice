//Get 5 numbers from user and print the smallest number//

#include<stdio.h>

int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
       scanf("%d",&a[i]); 
    }
    int min;
    min=a[0];
    for(int i=0;i<4;i++)
    {
        if(a[i+1]<a[i])
        {
            min=a[i+1];
        }
    }
    printf("%d",min);
}