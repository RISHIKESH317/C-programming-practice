//sum of 2 digit odd number whose ten's digit is 7

#include<stdio.h>

int disp_2digit_od_sum_tens(){
    int sum=0;
    for(int i=10; i<=99; i++){
        if(i%2!=0){
            if(i/10==7){
               sum=sum+i;   
        }
        }
    }
    return sum;
}

int main(){
    int result;
    result = disp_2digit_od_sum_tens();
    printf("%d",result);
    return 0;
}