//to check prime or not prime

#include <stdio.h>
int main()
{
    int x, y = 2, z = 0;

    printf("Enter a number : ");
    scanf("%d", &x);

    if (x <= 1)
    {
        printf("Not Prime");
        return 0;
    }

    while (y <= x / 2)
    {
        if (x % y == 0)
        {
            z = 1;
            break;
        }
        y++;
    }

    if (z == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
