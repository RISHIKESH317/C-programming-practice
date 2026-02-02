//hcf of two num

#include <stdio.h>

void disp_count_HCF2(int a, int b)
{
    int i, hcf = 1;

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("%d", hcf);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    disp_count_HCF2(a, b);
    return 0;
}
