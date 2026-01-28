//to swap firt and last digits

#include <stdio.h>

int main() {
    int n, temp, first, last, digits = 0, power = 1, middle, result;

    printf("Enter the number: ");
    scanf("%d", &n);

    last = n % 10;
    temp = n;

    for (int i = temp; i != 0; i /= 10) {
        digits++;
    }

    for (int i = 1; i < digits; i++) {
        power *= 10;
    }

    first = n / power;
    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Result is: %d", result);
    return 0;
}
