//print sum of 2 digit odd number whose ten's digit is 7

#include<stdio.h>

void disp_2digit_ones5(){
    int sum=0;
    for(int i=11; i<=99; i++){
        if((i/10==7)&&(i%2!=0)){
            sum=sum+i;
        }
    }
    printf("The result is :%d",sum);
}

int main (){
    disp_2digit_ones5();
}