//primme or not

#include<stdio.h>

void check_prime(int num){
    int flag,temp;
  flag=0;
  for(int i=2; i<num; i++){
      if(num%i==0){
          flag=1;
      }
  }
  if(flag==0){
      printf("prime");
  }
  else{
      printf("not prime");
  }
    
}

int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    check_prime(num);
}