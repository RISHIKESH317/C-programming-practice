//Write a loop program to print 5 to 1 on one by one.

#include <stdio.h>
int main (){
    int a=5;
    loop :if(a>=1){
        printf("%d\n",a);
        a--;
        goto loop;
    }
    
    return 0;
}