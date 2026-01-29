/*Write a program get number from user print the
total number of two-digit perfect square
numbers in the number.*/


#include <stdio.h>

int main() {
    int a, temp, c = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    for (temp = a; temp >= 10; temp/=10) {

        int b= temp % 100;

        for (int i = 4; i <= 9; i++) {
            if (b== i * i) {
                c++;
            }
           }
        }

    printf("The result is %d", c);
    return 0;
}
