#include <stdio.h>

int disp_count_sum14()
{
    int temp, sum, count = 0;

    for (int i = 1; i < 100000; i++)
    {
        temp = i;
        sum = 0;

        while (temp != 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }

        if (sum == 14)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int result;
    result = disp_count_sum14();
    printf("%d", result);
    return 0;
}
