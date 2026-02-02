#include<stdio.h>
int disp_LCM2(int,int );
int main()
{
    int x,y,a;
    printf("Enter the number 1 : ");
    scanf("%d",&x);
    printf("Enter the number 2 : ");
    scanf("%d",&y);
    a=disp_LCM2(x,y);
    printf("%d",a);
}
int disp_LCM2(int x,int y)
{
    int z;
    if(x>y)
    {
        z=x;
    }
    else
    {
        z=y;
    }
    while(z!=0)
    {
        if(z%x==0 && z%y==0)
        {
            return z;
        }
        z++;
    }
}
