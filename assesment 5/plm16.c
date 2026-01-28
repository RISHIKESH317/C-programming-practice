prime or composite number

#include <stdio.h>

int main()
{
    int a,flag;
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
    if(flag==0)
    {
        printf("prime no");
    }
    else
    {
        printf("comostr no");
    }
    return 0;

}