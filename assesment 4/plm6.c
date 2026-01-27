//Write a loop program to print two digit odd number below 20.

#include <stdio.h>
int main (){
    int a=11;
    loop :if(a<20){
        if(a%2!=0){
        printf("%d\n",a);
       
        }
         a++;
        goto loop;
    }
   
    
    return 0;
}