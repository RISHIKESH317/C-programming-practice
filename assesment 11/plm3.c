#include<stdio.h>
int arrange_ascend(int num,int *p){
    for(int i=0;i<num; i++){
        *p=i+1;
        printf("%d\n",*p);
    }
}
int main(){
    int num=5;
    int *p=&num;
    arrange_ascend(num,p);
}
