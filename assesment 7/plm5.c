//print odd from 1 to 9


#include<stdio.h>

void disp_odd(int x){
    for(int i=1; i<=x; i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}

int main(){
    int x=9;
    disp_odd(x);
}