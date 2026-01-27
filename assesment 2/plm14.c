// *Get a four-digit number from the user and check if the first 2 digits and last 2 digits are the same.
//If yes, print 1; otherwise, print 0


#include <stdio.h>
int main (){
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    
    printf("The result is :%d",a%100==a/100);
    return 0;
}