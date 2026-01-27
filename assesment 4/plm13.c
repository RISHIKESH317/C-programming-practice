//reverse number

#include <stdio.h>
int main (){
    int a,b,sum=0;
    printf("Enter the niumber :");
    scanf("%d",&a);
    loop :if(a!=0){
        b=a%10;
        sum =sum*10+b;
        a/=10;
        goto loop;
    }
   printf("the result is :%d",sum);
    
    return 0;
}