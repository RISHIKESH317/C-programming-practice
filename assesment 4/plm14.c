//Write a program to get a number from user and interchange the first and last digits and print the result.

#include <stdio.h>

int main()
{
    int n, first, last, temp, p = 1;

    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while (temp >= 10)
    {
        temp /= 10;
        p *= 10;
    }

    first = temp;

    n = n - first * p - last;
    n = n + last * p + first;

    printf("%d", n);
    return 0;
}
