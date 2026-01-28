//reverse the number

#include <stdio.h>

int main() {
    int a, rev = 0;

    printf("Enter the number: ");
    scanf("%d", &a);

   for(int i=a; i!=0; i/=10){
       rev=rev*10+(i%10);
   }

    printf("Reversed number is: %d", rev);
    return 0;
}
