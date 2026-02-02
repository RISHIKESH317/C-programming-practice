//two digit odd num

#include<stdio.h>

int disp_2digit_odd_num(int num){
    int c=0,temp,b;
     while(num>=10){
         b=num%100;
         if(b%2!=0){
             c++;
         }
       num/=10;

     }

    return c;
}

int main(){
    int result,num;
    printf("Enter number :");
    scanf("%d",&num);
    result = disp_2digit_odd_num(num);
    printf("%d",result);
}