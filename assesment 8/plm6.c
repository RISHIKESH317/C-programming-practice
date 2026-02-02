//sum of digit

#include<stdio.h>

int disp_sum_digits(int num){
    int sum=0,temp,b;
    while(num!=0){
        temp=num;
        b=temp%10;
        sum=sum+b;
        num/=10;
    }
    
    return sum;
}

int main(){
    int result,num;
    printf("Enter number ;");
    scanf("%d",&num);
    result = disp_sum_digits(num);
    printf("%d",result);
    return 0;
}