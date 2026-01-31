//reverse the number

#include<stdio.h>
void disp_reverse_number(int a){
    int sum=0,b;
    while(a!=0){
        b=a%10;
        sum=(sum*10)+b;
        a/=10;
    }
    printf("The reverse of digit :%d",sum);
}

int main(){
    int a;
    printf("enter the number :");
    scanf("%d",&a);
     disp_reverse_number(a);
}