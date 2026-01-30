/*Write a program to get two numbers from user and 
print the LCM of those numbers.*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);

    int g = a;
    if(b > a) {
        g = b;  // g is the greater number
    }

    int lcm = g;

    while(1) { // loop until LCM is found
        if(lcm % a == 0 && lcm % b == 0) {
            printf("LCM of %d and %d is %d\n", a, b, lcm);
            break;
        }
        lcm += g; // increment by the greater number
    }

    return 0;
}
