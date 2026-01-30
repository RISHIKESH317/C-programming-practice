//print sum from 6 to 1


#include<stdio.h>

void disp_rsum(){
    int sum=0;
    for(int i=6; i>=1; i--){
        sum=sum+i;
    }
    printf("The result is :%d",sum);
}
int main(){
   
    disp_rsum();
}

/*
#include<stdio.h>
void disp_rsum(int x){
    int sum=0;
    for(int i=6; i>=x; i--){
        sum=sum+i;
    }
    printf("The result is :%d",sum);
}
int mian(){
    int x=1;
    disp_rsum(x);
}*/