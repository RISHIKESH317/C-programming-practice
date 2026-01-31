//interchange first and last digi

#include<stdio.h>

void disp_interchange(int num){
    int a,b,c,power=1,temp,result;
    temp=num;
    while(temp>=10){
        temp/=10;
        power*=10;
    }
    a=temp;
    b=(num%power)/10;
    c=num%10;
    result= c*power+b*10+a;
    printf("The result is :%d",result);
}

int main(){
    int num;
    printf("enter number ");
    scanf("%d",&num);
    disp_interchange(num);
}