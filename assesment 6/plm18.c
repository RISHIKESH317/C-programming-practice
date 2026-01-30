#include <stdio.h>

int main()
{
    int n, temp, sum = 0;
    int i = 2, flag = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        flag = 1;   
    }
    else
    {
        while (i <= n / 2)
        {
            if (n % i == 0);
                break;
            }
            i++;
        }
    }

    temp = n;
    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if (flag == 0 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (flag == 1 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (flag == 0 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");

    return 0;
}
