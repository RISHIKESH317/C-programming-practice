/*Write a program to get number from user, print 
whether that number's first two digits 
(ten's digits and one's digit) is prime.*/

#include <stdio.h>

int main()
{
    int a,flag,b;
    printf("Enter the number :");
    scanf("%d",&a);
   b=(a/10)%100;
  
    
        flag=0;
        for(int i=2;i<b;i++)
        {
            if(a%i==0)
            {
               flag=1;
        }
        
    }
    if(flag==1){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
   
    return 0;

}
