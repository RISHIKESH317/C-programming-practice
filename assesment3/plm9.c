//Get a two-digit number from the user and check if the digit 0 is less than the digit 1.
//If yes, print "Success"; otherwise, print "Failure"

#include <stdio.h>
int main (){
    int a,b,c;
    printf("Enter the number :");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    if(b<c){
   printf("Success");
    }
    else{
        printf("Failure");
    }
    return 0;
}