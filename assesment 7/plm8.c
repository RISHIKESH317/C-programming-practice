//print 2 digit even number whose sum of the digit are 6


#include<stdio.h>

void disp_2digit_even_sum6(int x){
    
    for(int i=11; i<=x; i++){
        
        if(i%2==0&&(i%10)+(i/10)==6){
            printf("%d\n",i);
        }
    }
}

int main(){
    int x=99;
    disp_2digit_even_sum6(x);
}