//Write a program get number from user print the total number digits which are odd in the number.

#include<stdio.h>
void disp_total_odd_digit(int i);
int main()
{
    int a;
   scanf("%d",&a);
   disp_total_odd_digit(a);
}

void disp_total_odd_digit(int i)
{
    int b,c;
    while(i>0)
    {
        b=i%10;
        if(b%2==1)
        {
            c++;
        }
        i/=10;
    }
    printf("%d",c);
    return 0;

}
   