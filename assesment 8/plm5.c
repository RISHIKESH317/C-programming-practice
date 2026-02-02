//number of digits

#include<stdio.h>

int disp_2digit_od_sum_tens(int num){
    int c=0,temp;
    while(num!=0){
        temp=num;
        temp%=10;
        c++;
        num/=10;
    }
    return c;
}

int main(){
    int result,num;
    printf("Enter number ;");
    scanf("%d",&num);
    result = disp_2digit_od_sum_tens(num);
    printf("%d",result);
    return 0;
}