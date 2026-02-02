#include<stdio.h>
int disp_total_2digit_odd(int );
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    disp_total_2digit_odd(x);
}
int disp_total_2digit_odd(int x)
{
    int y,z=0;
while(x>10)
    {
        y=x%100;
        if(y%2!=0)
        {
            z++;
        }
        x=x/10;
    }
    printf("%d",z);
}