//Write a program to get a number from user print the total number of digits in that number
#include <stdio.h>
int main (){
    int a,n=0;
    printf("Enter the niumber :");
    scanf("%d",&a);
    loop :if(a!=0){
        n++;
        a/=10;
        goto loop;
    }
   printf("the result is :%d",n);
    
    return 0;
}