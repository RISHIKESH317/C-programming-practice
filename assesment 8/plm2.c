//sum frm 6-1

#include<stdio.h>

int disp_sum(){
    int sum=0;
    for(int i=6; i>=1; i--){
        sum=sum+i;
    }
    return sum;
}

int main(){
    int result;
    result = disp_sum();
    printf("%d",result);
    return 0;
}