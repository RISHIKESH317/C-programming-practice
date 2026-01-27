//Get a four-digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different.
//If yes, print "Success"; otherwise, print "Failure"

#include <stdio.h>
int main (){
    int a,b,c;
    printf("Enter the number :");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;

    if(c==b){
   printf("Success");
    }
    else{
        printf("Failure");
    }
    return 0;
}