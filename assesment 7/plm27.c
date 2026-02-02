//total count of numbers which are less than 100000 and whose sum of digit is 14

#include<stdio.h>

void disp_count_sum14(void);
int a,b,c,d;
int main()
{
    disp_count_sum14();
}

void disp_count_sum14(void)
{
    for(a=1;a<100000;a++)
    {
       for(b=a;b>0;b/=10)
       {
           d=(b%10)+d;
       }if(d==14)
       {
        c++;
       }d=0;
    }printf("%d",c);
}