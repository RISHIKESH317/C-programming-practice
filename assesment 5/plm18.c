/*Write a program to get a number from user, print whether that number is prime,
and sum of digit is equal to 14.*/

#include <stdio.h>

int main()
{
    int a,flag,b,sum=0,c=14;
    printf("Enter the number :");
    scanf("%d",&a);
   
    
        flag=0;
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
               flag=1;
        }
        
    }
    for(int i=a; i!=0; i/=10){
        b=i%10;
        sum=sum+b;
    }
    if(flag==0)
    { if(sum==14){
        printf("prime no and its sum is 14");
    }
    else{
        printf("prime no and its sum is not 14");
    }
    }
    else 
    {
        if(sum==14){
        printf("not prime and its sum is 14");
    }
    else{
         printf("not prime and its sum is not 14");
    }
    return 0;

}
}