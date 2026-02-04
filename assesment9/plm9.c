// Get 5 numbers from user, remove the odd numbers and create a new array then print the same.

#include<stdio.h>

int main(){
    int z=0;
    int a[5],b[5];
    for(int i=0 ;i<5; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<5; i++){
        if(a[i]%2==0){
            b[z]=a[i];
            z++;
        }
    }
    for(int i=0; i<z; i++){
        printf("%d\n",b[i]);
    }
    return 0;

}