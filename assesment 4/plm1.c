//Write a loop program to print 1 to 5 on one by one.

#include <stdio.h>
int main (){
    int a=1;
    loop :if(a<=5){
        printf("%d\n",a);
        a++;
        goto loop;
    }
    
    return 0;
}