#include <stdio.h>

int main()
{
    int num, temp, first, last, middle, power = 1;

    scanf("%d", &num);

    last = num % 10;   
    temp = num;


    while (temp >= 10)
    {
        temp /= 10;
        power *= 10;
    }

    first = temp; 

    middle = (num % power) / 10;

    num = last * power + middle * 10 + first;

    printf("%d", num);

    return 0;
}
