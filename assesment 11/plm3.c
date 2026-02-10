#include<stdio.h>
int arrange_ascend(int num){
    int i;
    for( i=num; i<6; i++){
        printf("%d\n",i);
    }
    return i;
}
int main(){
    int num=1,result;
    result = arrange_ascend(num);
   
    return 0;
}