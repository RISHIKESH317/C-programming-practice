//sum to two digit whoes ones digit is 5

#include<stdio.h>

int disp_2digit_ones5(){
    int sum=0;
    for(int i=10; i<=99; i++){
        if(i%10==5){
               sum=sum+i;   
        }
    }
    return sum;
}

int main(){
    int result;
    result = disp_2digit_ones5();
    printf("%d",result);
    return 0;
}