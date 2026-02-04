//avg

#include<stdio.h>
int main(){
    int a[5],sum=0;
    for(int i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    for(int j=0; j<5; j++){
        sum=sum+a[j];
    }
    int avg=sum/5;
    printf("Result :%d",avg);
    return 0;
}