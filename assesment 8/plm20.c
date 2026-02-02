#include <stdio.h>

int disp_count_HCF2(int a, int b)
{
    int hcf;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    return hcf;
}

int main()
{
    int x, y, result;

    scanf("%d %d", &x, &y);
    result = disp_count_HCF2(x, y);

    printf("%d", result);
    return 0;
}
