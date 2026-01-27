///*Get a three-digit number from user. If the sum of the digits is less than 10,then print the sum, otherwise add the digits of the sum.
//If the sum of the digits is less than 10, then print the sum,otherwise add the digits of the sum, and print the sum.

//Note: The result should always be a single digit only.

#include <stdio.h>

int main()
{
    int a, sum;
    printf("Enter the number :");
    scanf("%d", &a);
    sum = (a / 100) + (a / 10 % 10) + (a % 10);     
    sum = (sum / 10) + (sum % 10);            //2nd sum(if possible)
    sum = (sum / 10) + (sum % 10);            //3rd(if possibe)

    printf("The result is :%d", sum);

    return 0;
}
