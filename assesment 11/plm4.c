#include<stdio.h>
int find_2digit_odd(int num){
    int i;
    for( i=num; i<100; i++){
       if(i%2!=0){
           if((i%10)+(i/10)==7){
            *p=i;
           printf("%d ",*p);
       }
    }
    }
    return i;
}
int main(){
    int num=10,result;
    int *p=&num;
    result = find_2digit_odd(num);
   
    return 0;
}
