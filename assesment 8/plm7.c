//reverse number

#include<stdio.h>

int disp_reverse_number(int num){
    int sum=0,temp,b;
    while(num!=0){
        temp=num;
        b=temp%10;
        sum=sum*10+b;
        num/=10;
    }
    
    return sum;
}

int main(){
    int result,num;
    printf("Enter number ;");
    scanf("%d",&num);
    result = disp_reverse_number(num);
    printf("%d",result);
    return 0;
}