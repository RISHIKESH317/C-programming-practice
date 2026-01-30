//reverse

#include <stdio.h>

int main()
{
    int a, b, sum = 0, num;

    scanf("%d", &a);

    while (a > 0)
    {
        num = a % 10;
        sum = sum * 10 + num;
        a /= 10;
    }

    printf("%d", sum);
    return 0;
}
