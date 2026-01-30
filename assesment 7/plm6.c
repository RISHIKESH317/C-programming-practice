//print odd from 11 to 20


#include<stdio.h>

void disp_2digit_odd_below(int x){
    for(int i=11; i<=x; i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}

int main(){
    int x=20;
    disp_2digit_odd_below(x);
}