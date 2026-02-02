//single difit prime num

#include<stdio.h>

int disp_sindle_digit_prime(){
    int c=0,flag;
    for(int i=2; i<10; i++){
        flag=0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                flag=1;
            }
        }
            if(flag==0){
        c++;
    }

    }
    return c;
}

int main(){
    int result;
    result = disp_sindle_digit_prime();
    printf("%d",result);
}