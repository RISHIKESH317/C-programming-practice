//total number of two digit perfect square numbers

#include<stdio.h>

int disp_two_digit_square(int x);
int main()
{
    int a,b;
    scanf("%d",&a);
    b=disp_two_digit_square(a);
    printf("%d",b);
    return 0;
}

int disp_two_digit_square(int x)
{
    int y,z=0;
    for(;x>10;x/=10)
    {
        y=x%100;
        for(int i=1;i<10;i++)
        {
            if((i*i)==y)
            { 
              z++;
              break;
            }
        }
    }
    return z;
}