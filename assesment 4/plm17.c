
//Write a program get number from user print whether that number is prime or not.
#include <stdio.h>

int main()
{
   int a,b=2,flag;
   printf("Enter the number :");
   scanf("%d",&a);
   flag=0;
   loop :if(b<a){
       if(a%b==0){
           flag=1;
       }
       b++;
       goto loop;
   }
   if(flag==0){
       printf("primme number");
   }
   else{
       printf("composite number");
   }
    return 0;
}
