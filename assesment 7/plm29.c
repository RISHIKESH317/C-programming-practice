//lcm of three num

#include <stdio.h>

void disp_LCM3(int a, int b, int c)
{
    int max;

    // find the largest number
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    // find LCM
    while (1)
    {
        if (max % a == 0 && max % b == 0 && max % c == 0)
        {
            printf("%d", max);
            break;
        }
        max++;
    }
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    disp_LCM3(a, b, c);
    return 0;
}
