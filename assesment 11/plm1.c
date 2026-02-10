//get number and change the value indirect

#include<stdio.h>
int main(){
    int a=5;
    printf("%d\n",a);
    int *p;
      p=&a;
      *p=10;
      printf("%d ",a);
}