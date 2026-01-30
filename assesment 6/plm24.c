/*Write a program get number from user print the total number 
of two-digit perfect square numbers in the number.*/

#include<stdio.h>

 int main()
 { 
    int i,c=0;
    printf("Enter the number :");
    scanf("%d",&i);
    while(i!=0)
    {
          if((i%100)==16||(i%100)==25||(i%100)==36||(i%100)==49||(i%100)==64||(i%100)==81) 
      {
        c ++;
      }
      i/=10;
    }
    printf("%d",c);
    return 0;
}