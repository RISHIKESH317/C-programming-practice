/*Get 5 numbers from the user, remove the prime numbers, and create a new array, then print the same.*/

#include<stdio.h>

int main(){
    int z=0,temp,flag;
    int a[5],b[5];
    for(int i=0 ;i<5; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<5; i++){
        flag=0;
   for(int j=2; j<a[i]; j++){
       if(a[i]%j==0){
           flag=1;
           break;
       }
   }
   if(flag==1){
       b[z]=a[i];
       z++;
   }
    }
    for(int i=0; i<z; i++){
        printf("%d\n",b[i]);
    }
    return 0;

}