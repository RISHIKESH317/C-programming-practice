//Write a program to get a number from user and if the last digit
//of the number is even print the same number. If the last digit of
//the number is odd, then subtract 1 from the last digit and print
//the number. (Note: Last digit -MSB)

#include <stdio.h>

int main() {
    int n, temp, digits = 0, pow = 1;
    int first, last, middle, result;

    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    for (int i = 1; i < digits; i++) {
        pow *= 10;
    }

    first = n / pow;
    last = n % 10;
    middle = (n % pow) / 10;

    result = last * pow + middle * 10 + first;

    printf("%d\n", result);
    return 0;
}