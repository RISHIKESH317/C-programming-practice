// get input from user and find no of single digit prime number

#include <stdio.h>

int main() {
    int a, temp,c=0;

    printf("Enter a number: ");
    scanf("%d", &a);

    for (temp = a; temp !=0; temp/=10) {

        int b= temp % 10;
        
   
       
            if (b==2||b==3|b==5||b==7) {
                c++;
            }
       
        }

    printf("The result is %d", c);
    return 0;
}
