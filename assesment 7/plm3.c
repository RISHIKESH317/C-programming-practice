//print sum from 1 to 5

#include<stdio.h>

void disp_sum(int x){
    int sum=0;
    for(int i=1;i<=5; i++){
        sum=sum+i;
    }
    printf("The result is :%d",sum);
}
int main(){
    int x=5;
    disp_sum (x);
}