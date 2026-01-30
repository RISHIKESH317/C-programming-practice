// to count number of digits

#include<stdio.h>

void count_total_digits (int a){
    int c=0;
    while(a!=0){
        a/=10;
        c++;
    }
    printf("The count of digit is :%d",c);
}

int main (){
    int a;
    printf("Enter hte number :");
    scanf("%d",&a);
    count_total_digits(a);
}