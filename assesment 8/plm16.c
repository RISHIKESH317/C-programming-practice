//biggest 4 digit number divisible by 7 and 9

#include<stdio.h>

int disp_biggest_4digit_div7_9(int x);
int main()
{
    int a=9999,b;
    b=disp_biggest_4digit_div7_9(a);
    printf("%d",b);
}

int disp_biggest_4digit_div7_9(int x)
{
    for(;x>0;x--)
    {
        if((x%7==0)&&(x%9==0))
        {
            return x;
            
        }
    }
    return 0;
}