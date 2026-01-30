/*Write a program to get two numbers from user and 
print the LCM of those numbers*/

#include <stdio.h>

int main()
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // for loop to find LCM
    for (lcm = (a > b) ? a : b; ; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("LCM = %d", lcm);
            break;
        }
    }

    return 0;
}
