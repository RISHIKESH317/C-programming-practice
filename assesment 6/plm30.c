#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);

    int x = a;
    int y = b;

    // Use Euclid's algorithm
    while(y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    printf("HCF of %d and %d is %d\n", a, b, x);

    return 0;
}
