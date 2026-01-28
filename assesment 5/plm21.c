//Write a program get number from user print the total number digits which are odd in the number.

#include <stdio.h>

int main()
{
    int a, c = 0, d = 0;
    printf("Enter the number: ");
    scanf("%d", &a);

    int temp = a;

    for (int i = temp; i != 0; i /= 10) {
        c++;
    }

    temp = a; 

    for (int i = 0; i < c; i++) {
        int digit = temp / 1;          
        digit = temp % 10;           
        if (digit % 2 != 0) {         
            d++;
        }
        temp /= 10;                 
    }

    printf("Number of odd digits: %d\n", d);

    return 0;
}
