//Get a number from the user and check if the number not equals 50. If yes, the print "Success", otherwise print "Failure"


#include <stdio.h>
int main (){
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    if(a!=50){
   printf("Success");
    }
    else{
        printf("Failure");
    }
    return 0;
}