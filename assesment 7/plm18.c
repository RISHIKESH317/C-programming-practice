#include <stdio.h>

void check_prime_and_sum14(int n)
{
    int i, flag = 1;
    int sum = 0, temp = n;

    // Prime check
    if (n <= 1)
        flag = 0;
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    // Sum of digits
    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    // Output
    if (flag && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (!flag && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (flag && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");
}

int main()
{
    int n;
    scanf("%d", &n);
    check_prime_and_sum14(n);
    return 0;
}
