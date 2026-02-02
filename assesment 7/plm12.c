//sum of digits

#include<stdio.h>
void disp_sum_all_digit(int a){
    int sum=0,b;
    while(a!=0){
        b=a%10;
        sum=sum+b;
        a/=10;
    }
    printf("The sum of digit :%d",sum);
}

int main(){
    int a;
    printf("enter the number :");
    scanf("%d",&a);
     disp_sum_all_digit(a);
}
