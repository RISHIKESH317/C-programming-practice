//print 2 digit odd number whose sum of the digit are 7


#include<stdio.h>

void disp_2digit_odd_sum7(int x){
    
    for(int i=11; i<=x; i++){
        
        if(i%2!=0&&(i%10)+(i/10)==7){
            printf("%d\n",i);
        }
    }
}

int main(){
    int x=99;
    disp_2digit_odd_sum7(x);
}