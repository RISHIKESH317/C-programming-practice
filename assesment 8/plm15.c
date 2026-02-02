//single digit prime

#include<stdio.h>

int disp_1digit_prime(int num){
    int temp,c=0,flag;
    while(num!=0){
        temp=num;
        temp%=10;
        flag=0;
        for(int i=2; i<temp; i++){
            if(temp%2!=0){
                flag=1;
            }
        }
        num/=10;
        if(flag==1){
            c++;
        }
    }
    return c;

     }


int main(){
    int result,num;
    printf("Enter number :");
    scanf("%d",&num);
    result = disp_1digit_prime(num);
    printf("%d",result);
}