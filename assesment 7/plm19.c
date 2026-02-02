#include<stdio.h>

void middle_2digit_prime(int num){
    int b,flag;
    b=(num/10)%100;
    flag=0;
    for(int i=2; i<b; i++){
     if(b%i==0){
         flag=1;
     }   
    }
    if(flag==0){
        printf("prime");
    }
    else{
        
        printf("not prime");
    }
}
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    middle_2digit_prime(num);
}