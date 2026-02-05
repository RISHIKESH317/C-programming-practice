#include<stdio.h>
int main()
{
    int a[1000];
    int b=0,count=0,c;
    for(int i=0;i<1000;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            break;
        }
        else
        {
            b=b+a[i];
            count++;
        }
    }
    if(b%2!=0)
    {
        printf("%d",a[count/2]);
    }
    else
    {
        c=(a[count/2]+a[(count/2)+1])/2;
        printf("%d",c);
    }
}