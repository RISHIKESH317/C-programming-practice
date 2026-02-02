//no of single digit perfect square number in the given number

#include <stdio.h>

void disp_single_digit_square(int num)
{
    int digit, count = 0;

    while (num != 0)
    {
        digit = num % 10;

        if (digit == 1 || digit == 4 || digit == 9)
            count++;

        num /= 10;
    }

    printf("%d", count);
}

int main()
{
    int num;
    scanf("%d", &num);
    disp_single_digit_square(num);
    return 0;
}
