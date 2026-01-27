//Write a program to get a number from user and if the last digit
//of the number is even print the same number. If the last digit of
//the number is odd, then subtract 1 from the last digit and print
//the number. (Note: Last digit -MSB)


#include <stdio.h>

int main()
{
    
    int a,temp,p=1;
    printf("Enter the number :");
    scanf("%d",&a);
    temp =a;
   loop : if(temp>=10){
             temp/=10;
             p*=10;
            goto loop;
     }
     if (temp%2!=0){
         a=a-p;
     }

    printf("The result is :%d", a);
    return 0;
}
