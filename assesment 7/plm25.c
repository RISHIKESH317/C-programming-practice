//no of single digit prime number in the given number

#include <stdio.h>
void disp_single_digit_prime(int num){
    int temp,b,flag,c=0;
    temp=num;
    while(temp!=0){
        b=temp%10;
        flag=0;
        for(int i=2; i<b; i++){
            if(b%i==0){
                flag=1;
            }
        }
        if(flag==0){
            c++;
        }
        temp/=10;
    }
    printf("%d",c);
}

int main (){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    disp_single_digit_prime(num);
}