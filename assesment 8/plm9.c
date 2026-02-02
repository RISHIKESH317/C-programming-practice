/*Write a program to get a number from user and if the last digit
of the number is even print the same number. If the last digit of
the number is odd, then subtract 1 from the last digit and print
the number. (Note: Last digit -MSB)
Answer:
Input: 654324         Output - 654324
Input: 76895439       Output - 66895439
Input: 675            Output - 575*/

#include<stdio.h>

int check_last_digit_odd(int num){
    int temp,power=1;
    temp=num;
    while(temp>=10){
        temp/=10;
        power*=10;
    }
    if(temp%2!=0){
        num=num-power;
    }
    else{
        num=num;
    }
return num;
}

int main(){
    int num,result;
    printf("Enter number :");
    scanf("%d",&num);
    result =check_last_digit_odd(num);
    printf("%d",result);
}
