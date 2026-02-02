//interchange first and last

//interchange first and last digi

#include<stdio.h>

int disp_interchange_first_last(int num){
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
    return result;
}

int main(){
    int num,result1;
    printf("enter number ");
    scanf("%d",&num);
    result1 =disp_interchange_first_last(num);
    printf("%d",result1);
}