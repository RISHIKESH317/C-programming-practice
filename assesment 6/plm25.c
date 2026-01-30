/*Write a program get number from user print the total
number of single-digit prime numbers in the number.*/

#include<stdio.h>

 int main()
 { 
    int i,c=0;
    printf("Enter the number :");
    scanf("%d",&i);
    while(i!=0)
    {
      if((i%10)==2||(i%10)==3||(i%10)==5||(i%10)==7) 
      {
        c ++;
      }
      i/=10;
    }
    printf("%d",c);
    return 0;
}